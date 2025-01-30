#ifndef WARSTWAUSLUG_H
#define WARSTWAUSLUG_H

#include <QObject>
#include <QMainWindow>
#include <QDebug>
#include "symulator.h"
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QTimer>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include "symulator.h"
#include <QtWidgets>

class MainWindow;

class WarstwaUslug : public QObject
{
    Q_OBJECT
public:
    explicit WarstwaUslug(QObject *parent = nullptr);
    void SprawdzenieWszystkichDanych(double i);
    void SprawdzenieRegulatora(Regulator* r);
    void SprawdzenieGeneratora(Generator* g);
    void SprawdzenieObiektu(ObiektARX* o);
    void setGUI(MainWindow* ui = nullptr){ GUI = ui; }
    void setSymulator(symulator* sym){s=sym;};
    symulator* getSymulator(){return s;};
    void zapiszKonfiguracje();
    void wczytajKonfiguracje();
signals:
    void PoprawneDane(symulator* s);
    void BledneDane();
    void sygnalZapisano();
private:
    symulator* s;
    double interwal;
    MainWindow* GUI = nullptr;
    WarstwaUslug* usluga ;
};

#endif // WARSTWAUSLUG_H

