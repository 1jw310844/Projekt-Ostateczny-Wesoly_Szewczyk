/********************************************************************************
** Form generated from reading UI file 'oknoregulator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOREGULATOR_H
#define UI_OKNOREGULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OknoRegulator
{
public:
    QDialogButtonBox *ZatwierdzenieUstawien;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_12;
    QDoubleSpinBox *Wzmocnienie;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_13;
    QDoubleSpinBox *StalaI;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QDoubleSpinBox *StalaD;

    void setupUi(QDialog *OknoRegulator)
    {
        if (OknoRegulator->objectName().isEmpty())
            OknoRegulator->setObjectName("OknoRegulator");
        OknoRegulator->resize(386, 299);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoRegulator);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(-70, 200, 341, 32));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_4 = new QLabel(OknoRegulator);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 10, 69, 47));
        QFont font;
        font.setPointSize(11);
        label_4->setFont(font);
        label_5 = new QLabel(OknoRegulator);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 70, 65, 47));
        label_5->setFont(font);
        layoutWidget = new QWidget(OknoRegulator);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 10, 111, 49));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        QFont font1;
        font1.setPointSize(10);
        label_12->setFont(font1);

        verticalLayout_9->addWidget(label_12);

        Wzmocnienie = new QDoubleSpinBox(layoutWidget);
        Wzmocnienie->setObjectName("Wzmocnienie");

        verticalLayout_9->addWidget(Wzmocnienie);


        horizontalLayout->addLayout(verticalLayout_9);

        layoutWidget1 = new QWidget(OknoRegulator);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(170, 70, 111, 49));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        verticalLayout_2->addWidget(label_13);

        StalaI = new QDoubleSpinBox(layoutWidget1);
        StalaI->setObjectName("StalaI");

        verticalLayout_2->addWidget(StalaI);


        horizontalLayout_2->addLayout(verticalLayout_2);

        layoutWidget2 = new QWidget(OknoRegulator);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(90, 130, 194, 49));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        horizontalLayout_3->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);

        verticalLayout->addWidget(label_14);

        StalaD = new QDoubleSpinBox(layoutWidget2);
        StalaD->setObjectName("StalaD");

        verticalLayout->addWidget(StalaD);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(OknoRegulator);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoRegulator, qOverload<>(&QDialog::accept));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoRegulator, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OknoRegulator);
    } // setupUi

    void retranslateUi(QDialog *OknoRegulator)
    {
        OknoRegulator->setWindowTitle(QCoreApplication::translate("OknoRegulator", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("OknoRegulator", "Nastawa P", nullptr));
        label_5->setText(QCoreApplication::translate("OknoRegulator", "Nastawa I", nullptr));
        label_12->setText(QCoreApplication::translate("OknoRegulator", "Wzmocnienie", nullptr));
        label_13->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a Ca\305\202kuj\304\205ca", nullptr));
        label_6->setText(QCoreApplication::translate("OknoRegulator", "Nastawa D", nullptr));
        label_14->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a R\303\263\305\274niczkuj\304\205ca", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoRegulator: public Ui_OknoRegulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOREGULATOR_H
