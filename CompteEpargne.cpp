
#include "CompteEpargne.hpp"

CompteEpargne::CompteEpargne(std::string numero, double solde, double tauxInteret)
    : Compte(numero, solde) {
    this->tauxInteret = tauxInteret;
}

double CompteEpargne::calculerInteret() const {
    return solde * tauxInteret / 100.0;
}
