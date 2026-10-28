
#ifndef COMPTE_HPP
#define COMPTE_HPP

#include <string>

class Compte {
protected:
    std::string numero;
    double solde;

public:
    Compte(std::string numero, double solde);

    void deposer(double montant);
    bool retirer(double montant);

    void afficher() const;
};

#endif
