#include "generator.h"

Generator::Generator(RodzajSygnalu r, double a, double t, double pp, double czasAkt)
    : rodzaj(r), A(a), T(t), p(pp), czasAktywacji(czasAkt) {}

double Generator::generuj(double czas) {
    switch (rodzaj) {
    case RodzajSygnalu::Skok:
        return (czas >= czasAktywacji) ? A : 0;
    case RodzajSygnalu::Sinusoida:
        return A * sin((2 * 3.14159265359 / T) * fmod(czas, T));
    case RodzajSygnalu::Prostokatny:
        return (fmod(czas, T) < p * T) ? A : 0;
    default:
        return 0.0;
    }
}
RodzajSygnalu Generator::getRodzaj(){
    return rodzaj;
}
double Generator::getAmplituda(){
    return A;
}
