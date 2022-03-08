#include <iostream>
#include "Animal.hpp"

using namespace std;

// Constructeur
Animal::Animal(int lage, string lenomducri)
{
    this->age = lage;
    this->nomducri = lenomducri;
    cout << "Animal crée" << endl;
}

// Constructeur par défaut
Animal::Animal()
{
    this->age = 0;
    this->nomducri = "";
    cout << "Animal crée" << endl;
}
// Constructeur de copie
Animal::Animal(const Animal &a)
{
    this->age = a.age;
    this->nomducri = a.nomducri;
}

// Destructeur
Animal::~Animal()
{
    cout << "Animal mort" << endl;
}

void Animal::vieillir()
{
    this->age++;
}
void Animal::presenter()
{
    cout << "L'animal a " << this->age << " ans et pousse le cri : " << this->nomducri << endl;
}

string Animal::getNom() {
    return this->nom;
}

bool Animal::getGenre() {
    return this->estFemelle;
}

int Animal::getX() {
    return this->x;
}

int Animal::getY() {
    return this->y;
}

void Animal::deplacer(int _x, int _y) {
    if (this->estFemelle) {
        this->x = _x;
        this->y = _y;
    }

    else {
        cout << "L'animal n'est pas une femelle" << endl;
    }
   
}

void Animal::engendrer() {
    if (this->estFemelle) {
    cout << "L'animal a engendré" << endl;}
}

