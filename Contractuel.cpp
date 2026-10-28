#include "Contractuel.hpp"
#include <iostream>

Contractuel::Contractuel(std::string nom, int id, float salaireDeBase,
                         int dureeContrat, float tauxHoraire)
    : Employe(nom, id, salaireDeBase) {
    this->dureeContrat = dureeContrat;
    this->tauxHoraire = tauxHoraire;
}

float Contractuel::calculerSalaireMensuel(int heures) {
    return heures * tauxHoraire;
}

void Contractuel::afficherInfos() const {
    Employe::afficherInfos();
    std::cout << "Duree du contrat : " << dureeContrat << " mois" << std::endl;
    std::cout << "Taux horaire : " << tauxHoraire << " DH" << std::endl;
}
