#include <iostream>
#include "Animal.hpp"

using namespace std;

// Constructeur de copie
Animal::Animal(const Animal &a)
{
    this->age = a.age;
    this->nomducri = a.nomducri;
}

// Destructeur
Animal::~Animal() {}

void Animal::vieillir()
{
    this->age++;
}
void Animal::presenter(){
    cout << "L'animal a " << this->age << " ans et pousse le cri : " << this->nomducri << endl;
}