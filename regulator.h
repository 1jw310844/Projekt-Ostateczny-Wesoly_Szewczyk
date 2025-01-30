#ifndef REGULATOR_H
#define REGULATOR_H

class Regulator
{
    double wartoscZadana, wzmocnienieP, stalaI, stalaD, Uchyb, WczesniejszyUchyb, sumaUchybow, WartoscSterujaca, nastawaP, nastawaI, nastawaD;
public:
    Regulator();
    Regulator(double kp, double ki, double kd);
    void setWartoscZadana(double war);
    double getWartoscZadana() const;
    void aktualizujUchyb(double wartoscRegulowana);
    double obliczSterowanie();
    double getWartoscSterujaca();
    double getUchyb();
    double getNastawaP();
    double getNastawaI();
    double getNastawaD();
    double getWzmocnienie(){return wzmocnienieP;}
    double getStalaI(){return stalaI;}
    double getStalaD(){return stalaD;}
    void ZerowanieNastawaI();
    void ZerowanieNastawaD();
    void ZerowanieNastawaP();
    void setWartoscSterujaca(double on){WartoscSterujaca=on;}
    void setWzmocnienie(double w){wzmocnienieP=w;}
    void setStalaI(double si){stalaI=si;}
    void setStalaD(double sd){stalaD=sd;}
};

#endif // REGULATOR_H
