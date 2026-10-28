
#ifndef COMPTE_EPARGNE_HPP
#define COMPTE_EPARGNE_HPP

#include "Compte.hpp"

class CompteEpargne : public Compte {
private:
    double tauxInteret;

public:
    CompteEpargne(std::string numero, double solde, double tauxInteret);

    double calculerInteret() const;
};

#endif
