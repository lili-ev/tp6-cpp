#ifndef CONTRACTUEL_HPP
#define CONTRACTUEL_HPP

#include "Employe.hpp"

class Contractuel : public Employe {
private:
    int dureeContrat;
    float tauxHoraire;

public:
    Contractuel(std::string nom, int id, float salaireDeBase,
                int dureeContrat, float tauxHoraire);

    float calculerSalaireMensuel(int heures);

    void afficherInfos() const override;
};

#endif
