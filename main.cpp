#include <iostream>
#include "Employe.hpp"
#include "Permanent.hpp"
#include "Contractuel.hpp"

int main() {
    Employe* employes[3];

    employes[0] = new Permanent("Sara", 1, 6000, 12000);
    employes[1] = new Contractuel("Youssef", 2, 0, 12, 25);
    employes[2] = new Permanent("Amine", 3, 7500, 15000);

    for (int i = 0; i < 3; i++) {
        std::cout << "\n--- Employe " << i + 1 << " ---" << std::endl;
        employes[i]->afficherInfos();

        Contractuel* c = dynamic_cast<Contractuel*>(employes[i]);
        if (c != nullptr) {
            std::cout << "Salaire mensuel pour 160 heures : "
                      << c->calculerSalaireMensuel(160) << " DH" << std::endl;
        }
    }

    for (int i = 0; i < 3; i++) {
        delete employes[i];
    }

    return 0;
}
