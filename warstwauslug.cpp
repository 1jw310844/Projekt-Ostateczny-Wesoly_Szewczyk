#include "warstwauslug.h"

WarstwaUslug::WarstwaUslug(QObject *parent)
    : QObject{parent}, s(new symulator())
{}

void WarstwaUslug::SprawdzenieGeneratora(Generator* g){
    if(g->getRodzaj() == RodzajSygnalu::Skok && g->getAmplituda() > 0) {
        s->setGenerator(*g);
    } else if(g->getRodzaj() == RodzajSygnalu::Sinusoida && g->getAmplituda() > 0 && g->getOkres() > 0) {
        s->setGenerator(*g);
    } else if(g->getRodzaj() == RodzajSygnalu::Prostokatny && g->getAmplituda() > 0 && g->getOkres() > 0 && g->getWypelnienie() > 0 && g->getWypelnienie() <= 1) {
        s->setGenerator(*g);
    }
}

void WarstwaUslug::SprawdzenieRegulatora(Regulator* r){
    if(r->getStalaD() >= 0 && r->getStalaI() >= 0 && r->getWzmocnienie() >= 0) {
        if(r->getStalaD() > 0 || r->getStalaI() > 0 || r->getWzmocnienie() > 0) {
            s->setRegulator(*r);
        } else {
        }
    } else {
    }
}

void WarstwaUslug::SprawdzenieObiektu(ObiektARX* o){
    int a = 0, b = 0;
    for(double wsp : o->getWielomianA()) {
        if(wsp == 0) a++;
    }
    for(double wsp : o->getWielomianB()) {
        if(wsp == 0) b++;
    }
    if(b != 3 && a != 3 && o->getOpoznienie() >= 0) {
        s->setObiektARX(*o);
    } else {
    }
}

void WarstwaUslug::SprawdzenieWszystkichDanych(double i) {
    bool poprawnyGenerator = true;
    bool poprawnyRegulator = true;
    bool poprawnyObiekt = true;

    Generator generator = s->getGenerator();
    if (generator.getRodzaj() == RodzajSygnalu::Skok && generator.getAmplituda() <= 0) {
        poprawnyGenerator = false;
    } else if (generator.getRodzaj() == RodzajSygnalu::Sinusoida &&
               (generator.getAmplituda() <= 0 || generator.getOkres() <= 0)) {
        poprawnyGenerator = false;
    } else if (generator.getRodzaj() == RodzajSygnalu::Prostokatny &&
               (generator.getAmplituda() <= 0 || generator.getOkres() <= 0 ||
                generator.getWypelnienie() <= 0 || generator.getWypelnienie() > 1)) {
        poprawnyGenerator = false;
    }

    Regulator regulator = s->getRegulator();
    if (regulator.getStalaD() < 0 || regulator.getStalaI() < 0 || regulator.getWzmocnienie() < 0 ||
        (regulator.getStalaD() == 0 && regulator.getStalaI() == 0 && regulator.getWzmocnienie() == 0)) {
        poprawnyRegulator = false;
    }
    ObiektARX obiekt = s->getObiektARX();
    int liczbaZerA = 0;
    int liczbaZerB = 0;

    for (double wsp : obiekt.getWielomianA()) {
        if (wsp == 0) liczbaZerA++;
    }

    for (double wsp : obiekt.getWielomianB()) {
        if (wsp == 0) liczbaZerB++;
    }

    if (liczbaZerA == 3 || liczbaZerB == 3 || obiekt.getOpoznienie() < 0) {
        poprawnyObiekt = false;
    }


    if (!poprawnyGenerator || !poprawnyRegulator || !poprawnyObiekt||i<=0) {
        emit BledneDane();
    } else {
        emit PoprawneDane(s);
    }

}

void WarstwaUslug::zapiszKonfiguracje() {
    if (!s) {
        return;
    }

    QFile file("konfiguracja.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return;
    }

    QTextStream out(&file);
    Generator gen = s->getGenerator();
    Regulator reg = s->getRegulator();
    ObiektARX obiekt = s->getObiektARX();

    out << "Amplituda: " << gen.getAmplituda() << "\n";
    out << "Okres: " << gen.getOkres() << "\n";
    out << "Wypelnienie: " << gen.getWypelnienie() << "\n";
    out << "Rodzaj Sygnalu: " << static_cast<int>(gen.getRodzaj()) << "\n";

    out << "Wzmocnienie: " << reg.getWzmocnienie() << "\n";
    out << "Stala I: " << reg.getStalaI() << "\n";
    out << "Stala D: " << reg.getStalaD() << "\n";

    out << "Opoznienie: " << obiekt.getOpoznienie() << "\n";
    out << "Współczynniki A: ";
    for (double a : obiekt.getWielomianA()) out << a << " ";
    out << "\n";

    out << "Współczynniki B: ";
    for (double b : obiekt.getWielomianB()) out << b << " ";
    out << "\n";
    file.close();
}

void WarstwaUslug::wczytajKonfiguracje() {
    QFile file("konfiguracja.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    Generator gen;
    Regulator reg;
    ObiektARX obiekt;
    std::vector<double> A_coeffs, B_coeffs;
    double amp, okres, wyp, wz, stI, stD, opoznienie;

    QString line;
    while (!in.atEnd()) {
        line = in.readLine();
        if (line.startsWith("Amplituda:")) amp = line.split(": ")[1].toDouble();
        if (line.startsWith("Okres:")) okres = line.split(": ")[1].toDouble();
        if (line.startsWith("Wypelnienie:")) wyp = line.split(": ")[1].toDouble();
        if (line.startsWith("Rodzaj Sygnalu:"))
            gen.setRodzaj(static_cast<RodzajSygnalu>(line.split(": ")[1].toInt()));

        if (line.startsWith("Wzmocnienie:")) wz = line.split(": ")[1].toDouble();
        if (line.startsWith("Stala I:")) stI = line.split(": ")[1].toDouble();
        if (line.startsWith("Stala D:")) stD = line.split(": ")[1].toDouble();

        if (line.startsWith("Opoznienie:")) opoznienie = line.split(": ")[1].toDouble();
        if (line.startsWith("Współczynniki A:")) {
            QStringList values = line.split(": ")[1].split(" ");
            for (const QString& val : values) A_coeffs.push_back(val.toDouble());
        }
        if (line.startsWith("Współczynniki B:")) {
            QStringList values = line.split(": ")[1].split(" ");
            for (const QString& val : values) B_coeffs.push_back(val.toDouble());
        }
    }
    file.close();

    gen.setAmplituda(amp);
    gen.setOkres(okres);
    gen.setWypelnienie(wyp);

    reg.setWzmocnienie(wz);
    reg.setStalaI(stI);
    reg.setStalaD(stD);

    obiekt.setOpoznienie(opoznienie);
    obiekt.setWielomianA(A_coeffs);
    obiekt.setWielomianB(B_coeffs);

    if (s) {
        s->setGenerator(gen);
        s->setRegulator(reg);
        s->setObiektARX(obiekt);
    }
}
