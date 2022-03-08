#ifndef POISSON_HPP
#define POISSON_HPP

#include "Animal.hpp"
#include <string>

class Poisson:public Animal{

public :

Poisson();
Poisson(int _age, int _profondeur);
Poisson(const Poisson &p);
~Poisson();

protected :
double profondeur;

};
#endif