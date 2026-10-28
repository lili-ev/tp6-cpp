#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP

#include <string>

class Employe {
protected:
    std::string nom;
    int id;
    float salaireDeBase;

public:
    Employe(std::string nom, int id, float salaireDeBase);

    virtual void afficherInfos() const;

    virtual ~Employe();
};

#endif
