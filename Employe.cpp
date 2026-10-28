#include "Employe.hpp"
#include <iostream>

Employe::Employe(std::string nom, int id, float salaireDeBase) {
    this->nom = nom;
    this->id = id;
    this->salaireDeBase = salaireDeBase;
}

void Employe::afficherInfos() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "ID : " << id << std::endl;
    std::cout << "Salaire de base : " << salaireDeBase << " DH" << std::endl;
}

Employe::~Employe() {
}
