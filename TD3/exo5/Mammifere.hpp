#ifndef MAMMIFERE_HPP
#define MAMMIFERE_HPP


class Mammifere:public virtual Animal{

public :

Mammifere();
Mammifere(const Mammifere &m);
~Mammifere();

protected :
double vitesse;

};
#endif