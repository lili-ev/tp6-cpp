
#include "Etudiant.hpp"
#include <iostream>

Etudiant::Etudiant(std::string nom, int age, std::string niveau)
    : Personne(nom, age) {
    this->niveau = niveau;
}

void Etudiant::afficher() const {
    Personne::afficher();
    std::cout << "Niveau : " << niveau << std::endl;
}
