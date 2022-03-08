#ifndef DAUPHIN_HPP
#define DAUPHIN_HPP

class Dauphin:public Poisson, public Mammifere{

public :

Dauphin();
//Dauphin(int _age, std::string _cri);
Dauphin(const Dauphin &m);
~Dauphin();

};
#endif