#ifndef DAUPHIN_HPP
#define DAUPHIN_HPP

class Dauphin:public Animal{

public :

Dauphin();
Dauphin(int _age, std::string _cri);
Dauphin(const Dauphin &m);
~Dauphin();

protected :
int vitesse;

};
#endif