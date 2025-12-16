#pragma once
#include "Formule.h"

class RedBull : public Formule {
public:
    RedBull() : Formule("Red Bull Racing") {}

    void zvukMotoru() override {
        std::cout << "VROOOOOM! (Vysokootackovy motor Red Bull)" << std::endl;
    }
};
