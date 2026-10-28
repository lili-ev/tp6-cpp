
#include "ProduitElectronique.hpp"
#include <iostream>

ProduitElectronique::ProduitElectronique(
    std::string nom, double prix, int garantie)
    : Produit(nom, prix) {
    this->garantie = garantie;
}

void ProduitElectronique::afficherInfos() const {
    Produit::afficherInfos();
    std::cout << "Garantie : " << garantie << " ans" << std::endl;
}
