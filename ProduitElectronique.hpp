
#ifndef PRODUIT_ELECTRONIQUE_HPP
#define PRODUIT_ELECTRONIQUE_HPP

#include "Produit.hpp"

class ProduitElectronique : public Produit {
private:
    int garantie;

public:
    ProduitElectronique(std::string nom, double prix, int garantie);

    void afficherInfos() const override;
};

#endif
