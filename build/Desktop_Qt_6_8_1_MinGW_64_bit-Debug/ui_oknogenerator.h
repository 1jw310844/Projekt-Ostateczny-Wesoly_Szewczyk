/********************************************************************************
** Form generated from reading UI file 'oknogenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOGENERATOR_H
#define UI_OKNOGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OknoGenerator
{
public:
    QDialogButtonBox *ZatwierdzenieUstawien;
    QToolButton *RodzajeSygnalu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_19;
    QDoubleSpinBox *Amplituda;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_17;
    QDoubleSpinBox *Wypelnienie;
    QHBoxLayout *horizontalLayout;
    QLabel *label_18;
    QDoubleSpinBox *Okres;

    void setupUi(QDialog *OknoGenerator)
    {
        if (OknoGenerator->objectName().isEmpty())
            OknoGenerator->setObjectName("OknoGenerator");
        OknoGenerator->setEnabled(true);
        OknoGenerator->resize(328, 309);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(80);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(OknoGenerator->sizePolicy().hasHeightForWidth());
        OknoGenerator->setSizePolicy(sizePolicy);
        OknoGenerator->setMinimumSize(QSize(80, 60));
        OknoGenerator->setMaximumSize(QSize(500, 500));
        OknoGenerator->setBaseSize(QSize(80, 60));
        OknoGenerator->setModal(true);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoGenerator);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(-90, 230, 341, 32));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        RodzajeSygnalu = new QToolButton(OknoGenerator);
        RodzajeSygnalu->setObjectName("RodzajeSygnalu");
        RodzajeSygnalu->setGeometry(QRect(100, 41, 141, 21));
        RodzajeSygnalu->setBaseSize(QSize(0, 0));
        layoutWidget = new QWidget(OknoGenerator);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 70, 145, 146));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");

        horizontalLayout_4->addWidget(label_19);

        Amplituda = new QDoubleSpinBox(layoutWidget);
        Amplituda->setObjectName("Amplituda");

        horizontalLayout_4->addWidget(Amplituda);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");

        horizontalLayout_3->addWidget(label_17);

        Wypelnienie = new QDoubleSpinBox(layoutWidget);
        Wypelnienie->setObjectName("Wypelnienie");

        horizontalLayout_3->addWidget(Wypelnienie);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");

        horizontalLayout->addWidget(label_18);

        Okres = new QDoubleSpinBox(layoutWidget);
        Okres->setObjectName("Okres");

        horizontalLayout->addWidget(Okres);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(OknoGenerator);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoGenerator, qOverload<>(&QDialog::reject));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoGenerator, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(OknoGenerator);
    } // setupUi

    void retranslateUi(QDialog *OknoGenerator)
    {
        OknoGenerator->setWindowTitle(QCoreApplication::translate("OknoGenerator", "Dialog", nullptr));
        RodzajeSygnalu->setText(QCoreApplication::translate("OknoGenerator", "Rodzaj Sygna\305\202u", nullptr));
        label_19->setText(QCoreApplication::translate("OknoGenerator", "Amplituda", nullptr));
        label_17->setText(QCoreApplication::translate("OknoGenerator", "Wype\305\202nienie", nullptr));
        label_18->setText(QCoreApplication::translate("OknoGenerator", "Okres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoGenerator: public Ui_OknoGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOGENERATOR_H
