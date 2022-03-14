#ifndef POISSON_HPP
#define POISSON_HPP

class Poisson : public virtual Animal
{

    // Le mot-clé virtual permet à la classe petite-fille d'hériter aussi de la classe mère actuelle.

public:
    Poisson();
    Poisson(const Poisson &p);
    ~Poisson();

protected:
    double profondeur;
};
#endif