#include "oknogenerator.h"
#include "ui_oknogenerator.h"
#include "warstwauslug.h"

OknoGenerator::OknoGenerator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OknoGenerator)
{
    ui->setupUi(this);
    gen = new Generator;
    ui->Amplituda->setRange(-100, 1000);
    ui->Okres->setRange(0, 1000);
    ui->Wypelnienie->setRange(0, 1);
    ui->Amplituda->setSingleStep(0.1);
    ui->Wypelnienie->setSingleStep(0.05);
    ui->RodzajeSygnalu->addAction("Sygnał Skokowy");
    ui->RodzajeSygnalu->addAction("Sygnał Sinusoidalny");
    ui->RodzajeSygnalu->addAction("Sygnał Prostokątny");
    UstawienieOkna();
}

OknoGenerator::~OknoGenerator()
{
    delete ui;
}

void OknoGenerator::on_RodzajeSygnalu_clicked()
{
    ui->RodzajeSygnalu->showMenu();
}

void OknoGenerator::on_RodzajeSygnalu_triggered(QAction *arg1)
{
    QString wybor = arg1->text();
    if (wybor == "Sygnał Skokowy") {
        gen->setRodzaj(RodzajSygnalu::Skok);
        ui->RodzajeSygnalu->setText("Sygnał Skokowy");
    } else if (wybor == "Sygnał Sinusoidalny") {
        gen->setRodzaj(RodzajSygnalu::Sinusoida);
        ui->RodzajeSygnalu->setText("Sygnał Sinusoidalny");
    } else if (wybor == "Sygnał Prostokątny") {
        gen->setRodzaj(RodzajSygnalu::Prostokatny);
        ui->RodzajeSygnalu->setText("Sygnał Prostokątny");
    }
}

void OknoGenerator::on_ZatwierdzenieUstawien_accepted()
{
    gen->setAmplituda(ui->Amplituda->value());
    gen->setOkres(ui->Okres->value());
    gen->setWypelnienie(ui->Wypelnienie->value());
    usluga->SprawdzenieGeneratora(gen);
}
void OknoGenerator::UstawienieGUI(){
    this->setStyleSheet("background-color: rgb(90,90,90);");
}

void OknoGenerator::UstawienieOkna(){

    this->setStyleSheet("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, "
                    "stop:0 rgb(50, 50, 50), stop:1 rgb(30, 30, 30)); "
                    "color: white;");
    ui->Amplituda->setStyleSheet("background-color: white);");
    ui->RodzajeSygnalu->setStyleSheet(
        "QToolButton {"
        "    background-color: grey;"
        "    color: white;"
        "    border-radius: 5px;"
        "    border: 1px solid black;"
        "}"
        "QToolButton:hover {"
        "    background-color: white;"
        "    color: black;"
        "}"
        );
    ui->OkresNapis->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->AmplitudaNapis->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->WypelnienieNapis->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->ZatwierdzenieUstawien->setStyleSheet(
        "QDialogButtonBox {"
        "    background-color: white;"
        "    color: black;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
}
