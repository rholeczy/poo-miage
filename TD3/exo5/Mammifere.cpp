#include <iostream>
#include "Animal.hpp"
#include "Mammifere.hpp"

using namespace std;

Mammifere::Mammifere() {
    this->vitesse=0;
    this->x=0;
    this->y=0;
    this->nom="";
    this->age=0;
    this->estFemelle=false;
    this->nomducri="";
    cout << "Mammifere crée" << endl;

}
// Constructeur de copie
Mammifere::Mammifere(const Mammifere &m)
{
    this->vitesse=m.vitesse;
    this->x=m.x;
    this->y=m.y;
    this->nom=m.nom;
    this->age=m.age;
    this->estFemelle=m.estFemelle;
    this->nomducri=m.nomducri;
    cout << "Mammifere crée" << endl;
}

// Destructeur
Mammifere::~Mammifere() {
    cout << "Mammifere mort" << endl;
}
