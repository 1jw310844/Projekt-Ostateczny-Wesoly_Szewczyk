#ifndef SYMULATORUAR_H
#define SYMULATORUAR_H

#include <QObject>

class SymulatorUAR : public QObject
{
    Q_OBJECT
public:
    explicit SymulatorUAR(QObject *parent = nullptr);

signals:
};

#endif // SYMULATORUAR_H
