#ifndef POISSON_HPP
#define POISSON_HPP

class Poisson:public Animal{

public :

Poisson();
Poisson(int _age,std::string nom, int _profondeur);
Poisson(const Poisson &p);
~Poisson();

protected :
double profondeur;

};
#endif