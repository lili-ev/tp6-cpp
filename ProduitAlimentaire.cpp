
#include "ProduitAlimentaire.hpp"
#include <iostream>

ProduitAlimentaire::ProduitAlimentaire(
    std::string nom, double prix, std::string dateExpiration)
    : Produit(nom, prix) {
    this->dateExpiration = dateExpiration;
}

void ProduitAlimentaire::afficherInfos() const {
    Produit::afficherInfos();
    std::cout << "Date d'expiration : " << dateExpiration << std::endl;
}
