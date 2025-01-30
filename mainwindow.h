#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "symulator.h"
#include "wykresy.h"
#include <QMainWindow>
#include <QTimer>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include "warstwauslug.h"
#include "oknogenerator.h"
#include "oknoregulator.h"
#include "oknoobiektarx.h"
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class WarstwaUslug;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr,
               WarstwaUslug* program = nullptr);
    ~MainWindow();
    void UstawienieGUI();

private slots:
    void on_Start_clicked();
    void on_Stop_clicked();
    void on_Interwal_textChanged(const QString &arg1);
    void on_UstawieniaGeneratora_clicked();
    void on_UstawieniaObiektuARX_clicked();
    void on_UstawieniaRegulatora_clicked();
    void PokazWykres(symulator* s);
    void Blad();
    void on_Reset_clicked();
    void on_Zapisz_clicked();
    void on_Wczytaj_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *simulationTimer;
    WarstwaUslug* usluga ;
    OknoGenerator* okno_gen;
    OknoRegulator* okno_reg;
    OknoObiektARX* okno_obiekt;
    double czas;
    int interwalCzasowy=0;
    bool isSimulationRunning=true;
    Wykresy* wykres;
    void UstawienieLayout();
    QVBoxLayout *layout[4];
    void fileSelected(QString fileName);
    QFile plik;
    QString nazwaqPliku;
    void obslugaZapisu();
    QPushButton *Wczytaj;
};
#endif // MAINWINDOW_H
