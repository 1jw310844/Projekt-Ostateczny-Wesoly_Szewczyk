#ifndef OKNOREGULATOR_H
#define OKNOREGULATOR_H

#include <QDialog>
#include "regulator.h"
#include "warstwauslug.h"
#include <QPropertyAnimation>

namespace Ui {
class OknoRegulator;
}

class OknoRegulator : public QDialog
{
    Q_OBJECT
public:
    explicit OknoRegulator(QWidget *parent = nullptr);
    ~OknoRegulator();
    void setWarstwaUslug(WarstwaUslug* w){usluga=w;};
    void UstawienieReg();
private slots:
    void on_ZatwierdzenieUstawien_accepted();
private:
    Ui::OknoRegulator *ui;
    Regulator *reg;
    WarstwaUslug *usluga;
};

#endif // OKNOREGULATOR_H

