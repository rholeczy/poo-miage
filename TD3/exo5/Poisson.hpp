#ifndef POISSON_HPP
#define POISSON_HPP

class Poisson:public virtual Animal{

public:
Poisson();
Poisson(const Poisson &p);
~Poisson();

protected :
double profondeur;

};
#endif