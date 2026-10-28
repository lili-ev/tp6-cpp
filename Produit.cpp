
#include "Produit.hpp"
#include <iostream>

Produit::Produit(std::string nom, double prix) {
    this->nom = nom;
    this->prix = prix;
}

void Produit::afficherInfos() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Prix : " << prix << " DH" << std::endl;
}
