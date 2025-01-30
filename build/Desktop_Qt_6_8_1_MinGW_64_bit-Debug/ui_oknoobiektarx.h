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
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QDoubleSpinBox *Opoznienie;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QDoubleSpinBox *A1;
    QDoubleSpinBox *A2;
    QDoubleSpinBox *A3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QDoubleSpinBox *B1;
    QDoubleSpinBox *B2;
    QDoubleSpinBox *B3;

    void setupUi(QDialog *OknoObiektARX)
    {
        if (OknoObiektARX->objectName().isEmpty())
            OknoObiektARX->setObjectName("OknoObiektARX");
        OknoObiektARX->resize(358, 318);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoObiektARX);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(-100, 230, 341, 32));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_7 = new QLabel(OknoObiektARX);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 60, 257, 24));
        QFont font;
        font.setPointSize(10);
        label_7->setFont(font);
        layoutWidget = new QWidget(OknoObiektARX);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 150, 116, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        Opoznienie = new QDoubleSpinBox(layoutWidget);
        Opoznienie->setObjectName("Opoznienie");

        horizontalLayout->addWidget(Opoznienie);

        layoutWidget1 = new QWidget(OknoObiektARX);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(80, 90, 174, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");

        horizontalLayout_2->addWidget(label_10);

        A1 = new QDoubleSpinBox(layoutWidget1);
        A1->setObjectName("A1");

        horizontalLayout_2->addWidget(A1);

        A2 = new QDoubleSpinBox(layoutWidget1);
        A2->setObjectName("A2");

        horizontalLayout_2->addWidget(A2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        A3 = new QDoubleSpinBox(layoutWidget1);
        A3->setObjectName("A3");

        horizontalLayout_3->addWidget(A3);

        layoutWidget2 = new QWidget(OknoObiektARX);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(80, 120, 171, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName("label_11");

        horizontalLayout_4->addWidget(label_11);

        B1 = new QDoubleSpinBox(layoutWidget2);
        B1->setObjectName("B1");

        horizontalLayout_4->addWidget(B1);

        B2 = new QDoubleSpinBox(layoutWidget2);
        B2->setObjectName("B2");

        horizontalLayout_4->addWidget(B2);

        B3 = new QDoubleSpinBox(layoutWidget2);
        B3->setObjectName("B3");

        horizontalLayout_4->addWidget(B3);


        retranslateUi(OknoObiektARX);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoObiektARX, qOverload<>(&QDialog::accept));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoObiektARX, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OknoObiektARX);
    } // setupUi

    void retranslateUi(QDialog *OknoObiektARX)
    {
        OknoObiektARX->setWindowTitle(QCoreApplication::translate("OknoObiektARX", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("OknoObiektARX", "Wsp\303\263\305\202czynniki wielomian\303\263w A i B", nullptr));
        label_8->setText(QCoreApplication::translate("OknoObiektARX", "Op\303\263\305\272nienie", nullptr));
        label_10->setText(QCoreApplication::translate("OknoObiektARX", "A", nullptr));
        label_11->setText(QCoreApplication::translate("OknoObiektARX", "B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoObiektARX: public Ui_OknoObiektARX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOOBIEKTARX_H
