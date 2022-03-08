#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal{

public :

Animal();
Animal(int lage,std::string lenomducri);
Animal(const Animal &a);
virtual ~Animal();

void vieillir();
void presenter();
void deplacer(int _x,int _y);
void engendrer();

std::string getNom();
bool getGenre();
int getX();
int getY();


protected :
std::string nom;
bool estFemelle;
int x,y;
int age;
std::string nomducri;

};
#endif