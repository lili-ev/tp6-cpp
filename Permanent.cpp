#include "Permanent.hpp"
#include <iostream>

Permanent::Permanent(std::string nom, int id, float salaireDeBase, float primeAnnuelle)
    : Employe(nom, id, salaireDeBase) {
    this->primeAnnuelle = primeAnnuelle;
}

void Permanent::afficherInfos() const {
    Employe::afficherInfos();
    std::cout << "Prime annuelle : " << primeAnnuelle << " DH" << std::endl;
}
