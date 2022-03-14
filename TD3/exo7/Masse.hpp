#ifndef MASSE_HPP
#define MASSE_HPP

class Masse{

public :
Masse();
Masse(int _masse);
Masse(const Masse &m);
~Masse();

void affiche();
protected :
int masse;
};
#endif