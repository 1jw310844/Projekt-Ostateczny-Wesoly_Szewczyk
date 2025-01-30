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
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_OknoGenerator
{
public:
    QToolButton *RodzajeSygnalu;
    QLabel *AmplitudaNapis;
    QDoubleSpinBox *Amplituda;
    QLabel *WypelnienieNapis;
    QDoubleSpinBox *Wypelnienie;
    QLabel *OkresNapis;
    QDoubleSpinBox *Okres;
    QDialogButtonBox *ZatwierdzenieUstawien;

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
        OknoGenerator->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        OknoGenerator->setMouseTracking(false);
        OknoGenerator->setModal(true);
        RodzajeSygnalu = new QToolButton(OknoGenerator);
        RodzajeSygnalu->setObjectName("RodzajeSygnalu");
        RodzajeSygnalu->setGeometry(QRect(80, 40, 141, 31));
        RodzajeSygnalu->setBaseSize(QSize(0, 0));
        QFont font;
        font.setBold(true);
        RodzajeSygnalu->setFont(font);
        AmplitudaNapis = new QLabel(OknoGenerator);
        AmplitudaNapis->setObjectName("AmplitudaNapis");
        AmplitudaNapis->setGeometry(QRect(80, 80, 81, 31));
        AmplitudaNapis->setFont(font);
        AmplitudaNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Amplituda = new QDoubleSpinBox(OknoGenerator);
        Amplituda->setObjectName("Amplituda");
        Amplituda->setGeometry(QRect(170, 80, 61, 31));
        Amplituda->setFont(font);
        WypelnienieNapis = new QLabel(OknoGenerator);
        WypelnienieNapis->setObjectName("WypelnienieNapis");
        WypelnienieNapis->setGeometry(QRect(80, 130, 81, 31));
        WypelnienieNapis->setFont(font);
        WypelnienieNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Wypelnienie = new QDoubleSpinBox(OknoGenerator);
        Wypelnienie->setObjectName("Wypelnienie");
        Wypelnienie->setGeometry(QRect(170, 130, 61, 31));
        Wypelnienie->setFont(font);
        OkresNapis = new QLabel(OknoGenerator);
        OkresNapis->setObjectName("OkresNapis");
        OkresNapis->setGeometry(QRect(80, 180, 71, 31));
        OkresNapis->setFont(font);
        OkresNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Okres = new QDoubleSpinBox(OknoGenerator);
        Okres->setObjectName("Okres");
        Okres->setGeometry(QRect(170, 180, 61, 31));
        Okres->setFont(font);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoGenerator);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(40, 200, 191, 71));
        ZatwierdzenieUstawien->setFont(font);
        ZatwierdzenieUstawien->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        ZatwierdzenieUstawien->setMouseTracking(true);
        ZatwierdzenieUstawien->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        ZatwierdzenieUstawien->setAutoFillBackground(false);
        ZatwierdzenieUstawien->setStyleSheet(QString::fromUtf8("color:white"));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(OknoGenerator);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoGenerator, qOverload<>(&QDialog::reject));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoGenerator, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(OknoGenerator);
    } // setupUi

    void retranslateUi(QDialog *OknoGenerator)
    {
        OknoGenerator->setWindowTitle(QCoreApplication::translate("OknoGenerator", "Dialog", nullptr));
        RodzajeSygnalu->setText(QCoreApplication::translate("OknoGenerator", "Rodzaj Sygna\305\202u", nullptr));
        AmplitudaNapis->setText(QCoreApplication::translate("OknoGenerator", "Amplituda", nullptr));
        WypelnienieNapis->setText(QCoreApplication::translate("OknoGenerator", "Wype\305\202nienie", nullptr));
        OkresNapis->setText(QCoreApplication::translate("OknoGenerator", "Okres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoGenerator: public Ui_OknoGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOGENERATOR_H
