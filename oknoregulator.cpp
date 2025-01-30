#include "oknoregulator.h"
#include "ui_oknoregulator.h"
#include "warstwauslug.h"

OknoRegulator::OknoRegulator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OknoRegulator)
{
    ui->setupUi(this);
    reg = new Regulator;
    ui->Wzmocnienie->setRange(0, 1000);
    ui->Wzmocnienie->setValue(0.1);
    ui->StalaI->setRange(0, 1000);
    ui->StalaI->setValue(5);
    ui->StalaD->setRange(0, 1000);
    ui->StalaD->setValue(0.1);
    ui->Wzmocnienie->setSingleStep(0.1);
    ui->StalaI->setSingleStep(0.1);
    ui->StalaD->setSingleStep(0.1);
    UstawienieReg();
}

OknoRegulator::~OknoRegulator()
{
    delete ui;
}

void OknoRegulator::on_ZatwierdzenieUstawien_accepted()
{
    reg->setWzmocnienie(ui->Wzmocnienie->value());
    reg->setStalaI(ui->StalaI->value());
    reg->setStalaD(ui->StalaD->value());
    usluga->SprawdzenieRegulatora(reg);
}
void OknoRegulator::UstawienieReg()
{
    this->setStyleSheet("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, "
                        "stop:0 rgb(50, 50, 50), stop:1 rgb(30, 30, 30)); "
                        "color: white;");
    ui->NastawaPopis->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->NastawaDopis->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->NastawaIopis->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
}

