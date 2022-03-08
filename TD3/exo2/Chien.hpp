#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"
#include <string>

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