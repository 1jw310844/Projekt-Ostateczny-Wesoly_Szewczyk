#ifndef WARSTWAGUI_H
#define WARSTWAGUI_H

#include <QObject>
#include <QDoubleSpinBox>

class WarstwaGUI : public QObject
{
    Q_OBJECT
public:
    explicit WarstwaGUI(QObject *parent = nullptr);
    void setSpinBoxValue(double value);
public slots:
    void handleSpinBoxValueChanged(double value);
signals:
    void valueChanged(double value);
};

#endif // WARSTWAGUI_H
