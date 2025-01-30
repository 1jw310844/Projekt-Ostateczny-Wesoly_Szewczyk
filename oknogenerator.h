#ifndef OKNOGENERATOR_H
#define OKNOGENERATOR_H

#include <QDialog>
#include "generator.h"
#include "warstwauslug.h"
#include <QPropertyAnimation>

namespace Ui {
class OknoGenerator;
}

class OknoGenerator : public QDialog
{
    Q_OBJECT
public:
    explicit OknoGenerator(QWidget *parent = nullptr);
    ~OknoGenerator();
    void setWarstwaUslug(WarstwaUslug* w){usluga=w;};
    void UstawienieGUI();
    void UstawienieOkna();
private slots:
    void on_RodzajeSygnalu_clicked();
    void on_RodzajeSygnalu_triggered(QAction *arg1);
    void on_ZatwierdzenieUstawien_accepted();
private:
    Ui::OknoGenerator *ui;
    Generator *gen;
    WarstwaUslug *usluga;
};

#endif // OKNOGENERATOR_H

