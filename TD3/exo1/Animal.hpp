#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal{

public :

Animal() : age(0),nomducri(""){};
Animal(int lage,std::string lenomducri) : age(lage),nomducri(lenomducri){};
Animal(const Animal &a);
~Animal();

void vieillir();
void presenter();

protected :
int age;
std::string nomducri;

};
#endif