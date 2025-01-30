/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *TytulWykres1;
    QLabel *TytulWykres2;
    QLabel *TytulWykres3;
    QLabel *TytulGlowny;
    QPushButton *Start;
    QPushButton *Stop;
    QWidget *wykresWarZad;
    QWidget *WykUchyb;
    QWidget *WykPID;
    QPushButton *UstawieniaGeneratora;
    QPushButton *UstawieniaRegulatora;
    QPushButton *UstawieniaObiektuARX;
    QLabel *UstawieniaLabel;
    QWidget *WykSter;
    QLabel *TytulWykres4;
    QPushButton *Reset;
    QPushButton *Zapisz;
    QLabel *InterwalCzasowyLabel;
    QLineEdit *Interwal;
    QPushButton *Wczytaj;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1845, 942);
        MainWindow->setMinimumSize(QSize(1845, 942));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        TytulWykres1 = new QLabel(centralwidget);
        TytulWykres1->setObjectName("TytulWykres1");
        TytulWykres1->setGeometry(QRect(370, 460, 1121, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        TytulWykres1->setFont(font);
        TytulWykres1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TytulWykres2 = new QLabel(centralwidget);
        TytulWykres2->setObjectName("TytulWykres2");
        TytulWykres2->setGeometry(QRect(370, 790, 311, 51));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        TytulWykres2->setFont(font1);
        TytulWykres2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TytulWykres3 = new QLabel(centralwidget);
        TytulWykres3->setObjectName("TytulWykres3");
        TytulWykres3->setGeometry(QRect(790, 790, 311, 51));
        TytulWykres3->setFont(font1);
        TytulWykres3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        TytulGlowny = new QLabel(centralwidget);
        TytulGlowny->setObjectName("TytulGlowny");
        TytulGlowny->setGeometry(QRect(-140, 10, 2151, 91));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TytulGlowny->sizePolicy().hasHeightForWidth());
        TytulGlowny->setSizePolicy(sizePolicy);
        TytulGlowny->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        TytulGlowny->setFont(font2);
        TytulGlowny->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(90, 220, 181, 101));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        Start->setFont(font3);
        Stop = new QPushButton(centralwidget);
        Stop->setObjectName("Stop");
        Stop->setGeometry(QRect(90, 370, 181, 101));
        Stop->setFont(font3);
        wykresWarZad = new QWidget(centralwidget);
        wykresWarZad->setObjectName("wykresWarZad");
        wykresWarZad->setGeometry(QRect(370, 110, 1121, 351));
        WykUchyb = new QWidget(centralwidget);
        WykUchyb->setObjectName("WykUchyb");
        WykUchyb->setGeometry(QRect(370, 540, 311, 251));
        WykPID = new QWidget(centralwidget);
        WykPID->setObjectName("WykPID");
        WykPID->setGeometry(QRect(790, 540, 311, 251));
        UstawieniaGeneratora = new QPushButton(centralwidget);
        UstawieniaGeneratora->setObjectName("UstawieniaGeneratora");
        UstawieniaGeneratora->setGeometry(QRect(1580, 230, 171, 61));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        UstawieniaGeneratora->setFont(font4);
        UstawieniaRegulatora = new QPushButton(centralwidget);
        UstawieniaRegulatora->setObjectName("UstawieniaRegulatora");
        UstawieniaRegulatora->setGeometry(QRect(1580, 380, 171, 61));
        UstawieniaRegulatora->setFont(font4);
        UstawieniaObiektuARX = new QPushButton(centralwidget);
        UstawieniaObiektuARX->setObjectName("UstawieniaObiektuARX");
        UstawieniaObiektuARX->setGeometry(QRect(1580, 310, 171, 61));
        UstawieniaObiektuARX->setFont(font4);
        UstawieniaLabel = new QLabel(centralwidget);
        UstawieniaLabel->setObjectName("UstawieniaLabel");
        UstawieniaLabel->setGeometry(QRect(1580, 190, 171, 41));
        UstawieniaLabel->setMinimumSize(QSize(0, 0));
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setKerning(true);
        UstawieniaLabel->setFont(font5);
        UstawieniaLabel->setStyleSheet(QString::fromUtf8("color: white"));
        UstawieniaLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        WykSter = new QWidget(centralwidget);
        WykSter->setObjectName("WykSter");
        WykSter->setGeometry(QRect(1180, 540, 311, 251));
        TytulWykres4 = new QLabel(centralwidget);
        TytulWykres4->setObjectName("TytulWykres4");
        TytulWykres4->setGeometry(QRect(1180, 790, 311, 51));
        TytulWykres4->setFont(font1);
        TytulWykres4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Reset = new QPushButton(centralwidget);
        Reset->setObjectName("Reset");
        Reset->setGeometry(QRect(90, 510, 181, 101));
        Reset->setFont(font3);
        Zapisz = new QPushButton(centralwidget);
        Zapisz->setObjectName("Zapisz");
        Zapisz->setGeometry(QRect(1580, 450, 171, 61));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        Zapisz->setFont(font6);
        InterwalCzasowyLabel = new QLabel(centralwidget);
        InterwalCzasowyLabel->setObjectName("InterwalCzasowyLabel");
        InterwalCzasowyLabel->setGeometry(QRect(1580, 610, 171, 31));
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        InterwalCzasowyLabel->setFont(font7);
        InterwalCzasowyLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Interwal = new QLineEdit(centralwidget);
        Interwal->setObjectName("Interwal");
        Interwal->setGeometry(QRect(1580, 640, 171, 31));
        Interwal->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Wczytaj = new QPushButton(centralwidget);
        Wczytaj->setObjectName("Wczytaj");
        Wczytaj->setGeometry(QRect(1580, 520, 171, 61));
        Wczytaj->setFont(font6);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1845, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TytulWykres1->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Zadana i Regulowana", nullptr));
        TytulWykres2->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Uchybu Regulacji", nullptr));
        TytulWykres3->setText(QCoreApplication::translate("MainWindow", "Warto\305\233ci Regulatora PID", nullptr));
        TytulGlowny->setText(QCoreApplication::translate("MainWindow", "Symulator Uk\305\202adu Automatycznej Regulacji", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        UstawieniaGeneratora->setText(QCoreApplication::translate("MainWindow", "Generator", nullptr));
        UstawieniaRegulatora->setText(QCoreApplication::translate("MainWindow", "Regulator", nullptr));
        UstawieniaObiektuARX->setText(QCoreApplication::translate("MainWindow", "Obiekt ARX", nullptr));
        UstawieniaLabel->setText(QCoreApplication::translate("MainWindow", "Ustawienia", nullptr));
        TytulWykres4->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Steruj\304\205ca", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        Zapisz->setText(QCoreApplication::translate("MainWindow", " Zapisz ", nullptr));
        InterwalCzasowyLabel->setText(QCoreApplication::translate("MainWindow", "Interwa\305\202 Czasowy", nullptr));
        Interwal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Wczytaj->setText(QCoreApplication::translate("MainWindow", "Wczytaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
