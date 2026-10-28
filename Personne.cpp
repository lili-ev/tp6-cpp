
#include "Personne.hpp"
#include <iostream>

Personne::Personne(std::string nom, int age) {
    this->nom = nom;
    this->age = age;
}

void Personne::afficher() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Age : " << age << std::endl;
}
