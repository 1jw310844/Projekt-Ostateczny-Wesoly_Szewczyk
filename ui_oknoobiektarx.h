/********************************************************************************
** Form generated from reading UI file 'oknoobiektarx.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOOBIEKTARX_H
#define UI_OKNOOBIEKTARX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OknoObiektARX
{
public:
    QDialogButtonBox *ZatwierdzenieUstawien;
    QLabel *label_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *A1;
    QDoubleSpinBox *A2;
    QDoubleSpinBox *A3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *B1;
    QDoubleSpinBox *B2;
    QDoubleSpinBox *B3;
    QDoubleSpinBox *Opoznienie;
    QLabel *OpoznienieLabel;
    QLabel *Blebel;
    QLabel *ALebel;

    void setupUi(QDialog *OknoObiektARX)
    {
        if (OknoObiektARX->objectName().isEmpty())
            OknoObiektARX->setObjectName("OknoObiektARX");
        OknoObiektARX->resize(358, 318);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoObiektARX);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(260, 120, 81, 71));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Vertical);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_7 = new QLabel(OknoObiektARX);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 80, 191, 31));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(OknoObiektARX);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 110, 191, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        A1 = new QDoubleSpinBox(layoutWidget);
        A1->setObjectName("A1");
        QFont font1;
        font1.setBold(false);
        A1->setFont(font1);

        horizontalLayout_2->addWidget(A1);

        A2 = new QDoubleSpinBox(layoutWidget);
        A2->setObjectName("A2");

        horizontalLayout_2->addWidget(A2);

        A3 = new QDoubleSpinBox(layoutWidget);
        A3->setObjectName("A3");

        horizontalLayout_2->addWidget(A3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(OknoObiektARX);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 150, 191, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        B1 = new QDoubleSpinBox(layoutWidget1);
        B1->setObjectName("B1");

        horizontalLayout_4->addWidget(B1);

        B2 = new QDoubleSpinBox(layoutWidget1);
        B2->setObjectName("B2");

        horizontalLayout_4->addWidget(B2);

        B3 = new QDoubleSpinBox(layoutWidget1);
        B3->setObjectName("B3");

        horizontalLayout_4->addWidget(B3);

        Opoznienie = new QDoubleSpinBox(OknoObiektARX);
        Opoznienie->setObjectName("Opoznienie");
        Opoznienie->setGeometry(QRect(170, 200, 61, 21));
        OpoznienieLabel = new QLabel(OknoObiektARX);
        OpoznienieLabel->setObjectName("OpoznienieLabel");
        OpoznienieLabel->setGeometry(QRect(80, 200, 91, 25));
        QFont font2;
        font2.setBold(true);
        OpoznienieLabel->setFont(font2);
        OpoznienieLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Blebel = new QLabel(OknoObiektARX);
        Blebel->setObjectName("Blebel");
        Blebel->setGeometry(QRect(30, 160, 31, 21));
        Blebel->setFont(font);
        Blebel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ALebel = new QLabel(OknoObiektARX);
        ALebel->setObjectName("ALebel");
        ALebel->setGeometry(QRect(30, 120, 31, 21));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        ALebel->setFont(font3);
        ALebel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(OknoObiektARX);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoObiektARX, qOverload<>(&QDialog::accept));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoObiektARX, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OknoObiektARX);
    } // setupUi

    void retranslateUi(QDialog *OknoObiektARX)
    {
        OknoObiektARX->setWindowTitle(QCoreApplication::translate("OknoObiektARX", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("OknoObiektARX", "Wsp\303\263\305\202czynniki wielomian\303\263w A i B", nullptr));
        OpoznienieLabel->setText(QCoreApplication::translate("OknoObiektARX", "Op\303\263\305\272nienie", nullptr));
        Blebel->setText(QCoreApplication::translate("OknoObiektARX", "B", nullptr));
        ALebel->setText(QCoreApplication::translate("OknoObiektARX", "A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoObiektARX: public Ui_OknoObiektARX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOOBIEKTARX_H
