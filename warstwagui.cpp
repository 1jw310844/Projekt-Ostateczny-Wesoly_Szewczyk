#include "warstwagui.h"
#include <QDebug>

WarstwaGUI::WarstwaGUI(QObject *parent)
    : QObject{parent}
{}
void WarstwaGUI::setSpinBoxValue(double value)
{
    qDebug() << "Ustawiam wartość SpinBoxa na:" << value;
    emit valueChanged(value);
}

void WarstwaGUI::handleSpinBoxValueChanged(double value)
{
    qDebug() << "Wartość SpinBox zmieniła się na:" << value;
    // Możesz dodać dodatkową logikę obsługującą zmianę wartości
}
