#ifndef SYMULATOR_H
#define SYMULATOR_H


#include "Generator.h"
#include "Regulator.h"
#include "ObiektARX.h"

class symulator
{
    Generator generator;
    Regulator regulator;
    ObiektARX obiekt;
    double poprzednieWyjscie = 0;
    double wyjscieObiektu = 0;
    double lastRegulatorValue = 0;
    double lastObjectOutput = 0 ;
public:
    symulator();
    symulator(Generator g, Regulator r, ObiektARX o);
    double symulujKrok(double czas);
    double getWartoscZadana();
    double getZaklocenie();
    double getSterowanie();
    double getWyjscieObiektu();
    void setGenerator(Generator g);
    void setRegulator(Regulator r);
    void setObiektARX(ObiektARX o);
    Generator getGenerator();
    Regulator getRegulator();
    ObiektARX getObiektARX();
    void setLastRegulatorValue(double value) { lastRegulatorValue = value; }
    void setLastObjectOutput(double value) { lastObjectOutput = value; }
    double getLastRegulatorValue()  { return lastRegulatorValue; }
    double getLastObjectOutput()  { return lastObjectOutput; }
    void setWyjscieObiektu(double wo){wyjscieObiektu=wo;};
};

#endif // SYMULATOR_H

