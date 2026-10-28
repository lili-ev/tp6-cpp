
#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include "Personne.hpp"

class Etudiant : public Personne {
private:
    std::string niveau;

public:
    Etudiant(std::string nom, int age, std::string niveau);

    void afficher() const;
};

#endif
