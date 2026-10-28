
#include "Compte.hpp"
#include <iostream>

Compte::Compte(std::string numero, double solde) {
    this->numero = numero;
    this->solde = solde;
}

void Compte::deposer(double montant) {
    if (montant > 0) {
        solde += montant;
        std::cout << "Depot effectue." << std::endl;
    } else {
        std::cout << "Montant invalide." << std::endl;
    }
}

bool Compte::retirer(double montant) {
    if (montant > 0 && montant <= solde) {
        solde -= montant;
        std::cout << "Retrait effectue." << std::endl;
        return true;
    }

    std::cout << "Retrait impossible." << std::endl;
    return false;
}

void Compte::afficher() const {
    std::cout << "Numero du compte : " << numero << std::endl;
    std::cout << "Solde : " << solde << " DH" << std::endl;
}
