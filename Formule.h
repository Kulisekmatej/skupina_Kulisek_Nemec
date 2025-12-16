#ifndef FORMULE_H
#define FORMULE_H

#include <iostream>
#include <string>

class Formule {
protected:
    std::string nazevTymu;
    int rychlost;

public:
    Formule(std::string tym) : nazevTymu(tym), rychlost(0) {}

    void zrychli() {
        rychlost += 20;
        std::cout << "Formule " << nazevTymu << " zrychluje. Aktualni rychlost: " << rychlost << " km/h." << std::endl;
    }

    virtual void zvukMotoru() {
        std::cout << "Brum brum..." << std::endl;
    }

    virtual ~Formule() = default;
};

class Ferrari : public Formule {
public:
    Ferrari() : Formule("Ferrari") {}

    void zvukMotoru() override {
        std::cout << "VIIIIIIUUM! (Agresivni zvuk motoru Ferrari)" << std::endl;
    }
};

class RedBull : public Formule {
public:
    RedBull() : Formule("Red Bull Racing") {}

    void zvukMotoru() override {
        std::cout << "VROOOOOM! (Vysokootackovy motor Red Bull)" << std::endl;
    }
};

#endif