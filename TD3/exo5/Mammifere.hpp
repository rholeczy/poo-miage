#ifndef MAMMIFERE_HPP
#define MAMMIFERE_HPP

class Mammifere:public virtual Animal{

 // Le mot-clé virtual permet à la classe petite-fille d'hériter aussi de la classe mère actuelle.
 
public:
Mammifere();
Mammifere(const Mammifere &m);
~Mammifere();

protected :
double vitesse;

};
#endif 