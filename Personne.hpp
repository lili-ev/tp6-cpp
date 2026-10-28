
#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

class Personne {
protected:
    std::string nom;
    int age;

public:
    Personne(std::string nom, int age);

    void afficher() const;
};

#endif
