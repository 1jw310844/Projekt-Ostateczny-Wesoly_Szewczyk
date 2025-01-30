#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "oknogenerator.h"
#include "oknoregulator.h"
#include "oknoobiektarx.h"
#include <QDebug>
#include <QMessageBox>
#include <QGraphicsDropShadowEffect>

std::random_device srng;
std::mt19937 rng;

void MainWindow::UstawienieLayout(){
    for(int i=0;i<4;i++){
        layout[i] = new QVBoxLayout();
        layout[i]->setContentsMargins(0, 0, 0, 0);
    }
    ui->wykresWarZad->setLayout(layout[0]);
    ui->WykUchyb->setLayout(layout[1]);
    ui->WykPID->setLayout(layout[2]);
    ui->WykSter->setLayout(layout[3]);
}

MainWindow::MainWindow(QWidget *parent, WarstwaUslug *prog)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , simulationTimer(new QTimer(this))
    ,usluga(prog)
    ,czas(0.0)
{
    usluga->setGUI(this);
    ui->setupUi(this);
    wykres=new  Wykresy();
    okno_gen = new OknoGenerator(this);
    okno_gen->setWarstwaUslug(usluga);
    okno_reg = new OknoRegulator(this);
    okno_reg->setWarstwaUslug(usluga);
    okno_obiekt = new OknoObiektARX(this);
    okno_obiekt->setWarstwaUslug(usluga);
    this->showMaximized();
    simulationTimer = new QTimer(this);
    UstawienieGUI();
    UstawienieLayout();
    wykres->InicjalizujWykresy(layout);
    connect(usluga, &WarstwaUslug::PoprawneDane, this, &MainWindow::PokazWykres);
    connect(usluga, &WarstwaUslug::BledneDane, this, &MainWindow::Blad);
    connect(usluga, &WarstwaUslug::sygnalZapisano, this, &MainWindow::obslugaZapisu);
    Wczytaj = new QPushButton("Wczytaj konfigurację", this);
    connect(Wczytaj, &QPushButton::clicked, this, &MainWindow::on_Wczytaj_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Start_clicked()
{
    usluga->SprawdzenieWszystkichDanych(interwalCzasowy);
}

void MainWindow::on_Stop_clicked()
{
    simulationTimer->stop();
}

void MainWindow::on_Interwal_textChanged(const QString &arg1)
{
    interwalCzasowy=arg1.toInt();
}

void MainWindow::PokazWykres(symulator* s) {
    if (!s) {
        return;
    }
    wykres->setSymulator(s);

    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresWartosciZadanej();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresUchybu();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresPID();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresWartosciSterowania();
    });

    if (interwalCzasowy > 0) {
        simulationTimer->start(interwalCzasowy);
    } else {
    }
}

void MainWindow::Blad(){
    QMessageBox::warning(this, "Ostrzeżenie", "Nie uzupełniłeś Wszystkich Danych");
}

void MainWindow::on_UstawieniaGeneratora_clicked()
{
    okno_gen->exec();
}

void MainWindow::on_UstawieniaObiektuARX_clicked()
{
    okno_obiekt->exec();
}

void MainWindow::on_UstawieniaRegulatora_clicked()
{
    okno_reg->exec();
}

void MainWindow::on_Reset_clicked()
{
    disconnect(simulationTimer, nullptr, nullptr, nullptr);
    simulationTimer->stop();

    wykres->ResetujWykresy();
    wykres->ResetCzas();

    symulator* sym = usluga->getSymulator();
    if (sym) {
        sym->getRegulator().ZerowanieNastawaP();
        sym->getRegulator().ZerowanieNastawaI();
        sym->getRegulator().ZerowanieNastawaD();
        sym->setWyjscieObiektu(0);
        sym->setLastRegulatorValue(0);
        sym->setLastObjectOutput(0);

        Generator gen = sym->getGenerator();
        gen.setAmplituda(0);
        gen.setOkres(1);
        gen.setWypelnienie(0.5);
        sym->setGenerator(gen);

        Regulator reg;
        sym->setRegulator(reg);

        ObiektARX obiekt;
        sym->setObiektARX(obiekt);
    }
    czas = 0;
    interwalCzasowy = 0;
    isSimulationRunning = false;
    wykres->InicjalizujWykresy(layout);
}

void MainWindow::UstawienieGUI(){
    QString buttonStyleStart =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: green;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleStop =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: red;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleReset =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: orange;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleReszta =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: grey;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";

    this->setStyleSheet(
        "QWidget { color: white; }"
        "QMainWindow { background-color: rgb(90,90,90); }"
        );
    this->setStyleSheet(
        "QMessageBox { color: black; "
        "background-color: grey;"
        "}"
        "QMainWindow { background-color: rgb(90,90,90); }"
        );
    ui->Interwal->setStyleSheet(
        "QLineEdit {"
        "    background-color: white;"
        "    color: black;"
        "}"
        );
    ui->Start->setStyleSheet(buttonStyleStart);
    ui->Stop->setStyleSheet(buttonStyleStop);
    ui->Reset->setStyleSheet(buttonStyleReset);
    ui->Wczytaj->setStyleSheet(buttonStyleReszta);
    ui->UstawieniaGeneratora->setStyleSheet(buttonStyleReszta);
    ui->UstawieniaRegulatora->setStyleSheet(buttonStyleReszta);
    ui->UstawieniaObiektuARX->setStyleSheet(buttonStyleReszta);
    ui->Zapisz->setStyleSheet(buttonStyleReszta);

    ui->TytulWykres1->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres2->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres3->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres4->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulGlowny->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->InterwalCzasowyLabel->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    QGraphicsDropShadowEffect *effect[8]; //

    for (int i = 0; i < 8; ++i) {
        effect[i] = new QGraphicsDropShadowEffect();
        effect[i]->setOffset(0, 0);
        effect[i]->setBlurRadius(10);
        effect[i]->setColor(Qt::black);
    }
    ui->Start->setGraphicsEffect(effect[0]);
    ui->Stop->setGraphicsEffect(effect[1]);
    ui->Reset->setGraphicsEffect(effect[2]);
    ui->UstawieniaGeneratora->setGraphicsEffect(effect[3]);
    ui->UstawieniaObiektuARX->setGraphicsEffect(effect[4]);
    ui->UstawieniaRegulatora->setGraphicsEffect(effect[5]);
    ui->Zapisz->setGraphicsEffect(effect[6]);
    ui->Wczytaj->setGraphicsEffect(effect[7]);
}

void MainWindow::obslugaZapisu()
{
    QMessageBox::information(this, "Zapis konfiguracji", "Konfiguracja została zapisana.");
}

void MainWindow::on_Zapisz_clicked()
{
    usluga->zapiszKonfiguracje();
    QMessageBox::information(this, "Sukces", "Konfiguracja została zapisana.");
}

void MainWindow::on_Wczytaj_clicked()
{
    usluga->wczytajKonfiguracje();
    QMessageBox::information(this, "Sukces", "Konfiguracja została wczytana.");
}
