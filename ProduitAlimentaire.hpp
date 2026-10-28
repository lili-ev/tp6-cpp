
#ifndef PRODUIT_ALIMENTAIRE_HPP
#define PRODUIT_ALIMENTAIRE_HPP

#include "Produit.hpp"

class ProduitAlimentaire : public Produit {
private:
    std::string dateExpiration;

public:
    ProduitAlimentaire(std::string nom, double prix, std::string dateExpiration);

    void afficherInfos() const override;
};

#endif
