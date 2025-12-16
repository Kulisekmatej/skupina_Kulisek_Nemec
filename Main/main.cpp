#include "Formule.h"

class RedBull : public Formule {
public:
    RedBull() : Formule("Red Bull Racing") {}

    void zvukMotoru() override {
        std::cout << "VROOOOOM! (Vysokootackovy motor Red Bull)" << std::endl;
    }
};

int main() {
    Ferrari ferrari;
    RedBull redBull;

    ferrari.zrychli();
    ferrari.zvukMotoru();

    redBull.zrychli();
    redBull.zvukMotoru();

    return 0;
}

