#ifndef OBIEKTARX_H
#define OBIEKTARX_H

#include <vector>
#include <random>
#include <deque>

class ObiektARX
{
    double k, z;
    std::vector<double> a, b;
    std::deque<double> ui, yi;
    double mean, stdev;
    std::mt19937 generator;
    std::normal_distribution<double> zaklocenie;
    void zaktualizujZaklocenie();
public:
    ObiektARX();
    ObiektARX(double kk, double zz, std::vector<double> aa, std::vector<double> bb, std::mt19937 gen, double mean = 0.3, double stdev = 0.0);
    void setZaklocenie(double newMean, double newStdev);
    double getZaklocenie();
    double obliczWyjscie(double uii);
    void setOpoznienie(double o){k=o;}
    void setWielomianA(std::vector<double> wa){a=wa;}
    void setWielomianB(std::vector<double> wb){b=wb;}
    double getOpoznienie(){return k;}
    std::vector<double> getWielomianA(){return a;}
    std::vector<double> getWielomianB(){return b;}
    void setGenerator(std::mt19937 g){generator = g;}
    void setMean(double m){mean =m;}
    void setStdev(double s){stdev =s;}
};

#endif // OBIEKTARX_H
