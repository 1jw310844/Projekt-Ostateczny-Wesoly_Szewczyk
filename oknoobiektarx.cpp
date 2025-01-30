#include "oknoobiektarx.h"
#include "ui_oknoobiektarx.h"
#include "warstwauslug.h"

OknoObiektARX::OknoObiektARX(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OknoObiektARX)

{
    ui->setupUi(this);
    obiekt = new ObiektARX;
    usluga = new WarstwaUslug;
    ui->A1->setRange(-1000, 1000);
    ui->A1->setValue(0.5);
    ui->A2->setRange(-1000, 1000);
    ui->A2->setValue(0.4);
    ui->A3->setRange(-1000, 1000);
    ui->A3->setValue(0.3);
    ui->B1->setRange(-1000, 1000);
    ui->B1->setValue(0.3);
    ui->B2->setRange(-1000, 1000);
    ui->B2->setValue(0.2);
    ui->B3->setRange(-1000, 1000);
    ui->B3->setValue(0.1);
    ui->Opoznienie->setRange(0, 1000);
    ui->Opoznienie->setValue(1);
    ui->A1->setSingleStep(0.1);
    ui->A2->setSingleStep(0.1);
    ui->A3->setSingleStep(0.1);
    ui->B1->setSingleStep(0.1);
    ui->B2->setSingleStep(0.1);
    ui->B3->setSingleStep(0.1);
    ui->Opoznienie->setSingleStep(0.1);
    UstawienieARX();
}

OknoObiektARX::~OknoObiektARX()
{
    delete ui;
}

void OknoObiektARX::on_ZatwierdzenieUstawien_accepted()
{
    obiekt->setOpoznienie(ui->Opoznienie->value());
    obiekt->setWielomianA({ui->A1->value(), ui->A2->value(), ui->A3->value()});
    obiekt->setWielomianB({ui->B1->value(), ui->B2->value(), ui->B3->value()});
    usluga->SprawdzenieObiektu(obiekt);
}
void OknoObiektARX::UstawienieARX()
{
    this->setStyleSheet("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, "
                        "stop:0 rgb(50, 50, 50), stop:1 rgb(30, 30, 30)); "
                        "color: white;");

    ui->ALebel->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->Blebel->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->OpoznienieLabel->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->label_7->setStyleSheet(
        "QLabel {"
        "    background-color: grey;"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
}
