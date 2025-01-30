#ifndef WYKRESY_H
#define WYKRESY_H

#include <QObject>
#include <QWidget>
#include <QChart>
#include <QLineSeries>
#include <QChartView>
#include <QValueAxis>
#include <QVBoxLayout>
#include "symulator.h"

class Wykresy : public QObject
{
    Q_OBJECT
public:
    explicit Wykresy(QWidget *parent = nullptr);
    void inicjalizacjaWykresuWartosciZadanej(QVBoxLayout *layout);
    void inicjalizacjaWykresuUchybu(QVBoxLayout *layout);
    void inicjalizacjaWykresuPID(QVBoxLayout *layout);
    void inicjalizacjaWykresuWartosciSterowania(QVBoxLayout *layout);
    void WykresWartosciZadanej();
    void WykresUchybu();
    void WykresPID();
    void WykresWartosciSterowania();
    void AktualizujWykresy();
    void InicjalizujWykresy(QVBoxLayout *layout[4]);
    void setSymulator(symulator* sym){s=sym;};
    void wyczyscLayout(QLayout* layout);
    void ResetCzas(){czas=0;};
    void ResetujWykresy();
private:
    QLineSeries *seria[7];
    QChart *wykres[4];
    QValueAxis *osX[4];
    QValueAxis *osY[4];
    QChartView *Widok[4];
    double czas;
    QWidget* parent;
    symulator* s;
signals:
};

#endif // WYKRESY_H
