#ifndef CHIEN_HPP
#define CHIEN_HPP

class Chien:public Animal{

public :

Chien();
Chien(int _age, std::string _cri);
Chien(const Chien &c);
~Chien();

void presenter();

protected :
std::string cri;

};
#endif