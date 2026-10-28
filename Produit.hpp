
#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>

class Produit {
protected:
    std::string nom;
    double prix;

public:
    Produit(std::string nom, double prix);

    virtual void afficherInfos() const;

    virtual ~Produit() = default;
};

#endif
