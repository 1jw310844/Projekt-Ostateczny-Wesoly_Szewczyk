#ifndef GENERATOR_H
#define GENERATOR_H

#include <cmath>

enum class RodzajSygnalu { Skok, Sinusoida, Prostokatny };

class Generator
{
    RodzajSygnalu rodzaj;
    double A, T, p, czasAktywacji=0.0;

public:
    Generator(RodzajSygnalu r = RodzajSygnalu::Skok, double a = 0.0, double t = 0.0, double pp = 0.0, double czasAkt = 0.0);
    double generuj(double czas);
    RodzajSygnalu getRodzaj();
    double getAmplituda();
    double getOkres(){return T;};
    double getWypelnienie(){return p;}
    void setRodzaj(RodzajSygnalu r){rodzaj=r;}
    void setAmplituda(double a){A=a;}
    void setOkres(double o){T=o;}
    void setWypelnienie(double w){p=w;}
    void setCzasAktywacji(double ca){czasAktywacji=ca;}
};

#endif // GENERATOR_H

