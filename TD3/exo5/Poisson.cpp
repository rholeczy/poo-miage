#include <iostream>
#include "Animal.hpp"
#include "Poisson.hpp"

using namespace std;

Poisson::Poisson(){
    this->profondeur=0;
    this->x=0;
    this->y=0;
    this->nom="";
    this->age=0;
    this->estFemelle=false;
    this->nomducri="";
    cout << "Poisson crée" << endl;
};

// Constructeur de copie
Poisson::Poisson(const Poisson &p)
{
    this->profondeur=p.profondeur;
    this->x=p.x;
    this->y=p.y;
    this->nom=p.nom;
    this->age=p.age;
    this->estFemelle=p.estFemelle;
    this->nomducri=p.nomducri;
    cout << "Poisson crée" << endl;
}

// Destructeur
Poisson::~Poisson() {
    cout << "Poisson mort" << endl;
}

