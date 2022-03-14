#include <iostream>
#include "Animal.hpp"
#include "Poisson.hpp"
#include "Mammifere.hpp"
#include "Dauphin.hpp"

using namespace std;

Dauphin::Dauphin()
{
    this->vitesse = 0;
    this->profondeur = 0;
    this->x = 0;
    this->y = 0;
    this->nom = "";
    this->age=0;
    this->estFemelle=false;
    this->nomducri="";
    this->cri="";
    cout << "Dauphin crée" << endl;
};

// Constructeur de copie
Dauphin::Dauphin(const Dauphin &d)
{
     this->vitesse = d.vitesse;
    this->profondeur = d.profondeur;
    this->x = d.x;
    this->y = d.y;
    this->nom = d.nom;
    this->age=d.age;
    this->estFemelle=d.estFemelle;
    this->nomducri=d.nomducri;
    this->cri=d.cri;
    cout << "Dauphin crée" << endl;
}

// Destructeur
Dauphin::~Dauphin() {
    cout << "Dauphin mort" << endl;
}

Dauphin::Dauphin(int _age, string _cri) : Animal(_age, "siffle")
{
    this->cri = _cri;
    cout << "Dauphin crée" << endl;
};

void Dauphin::presenter()
{
    cout << "Nom : " << this->nom << "  Cri : " << this->cri << endl;
    cout << "Profondeur : " << this->profondeur << " , vitesse du dauphin : " << this->vitesse << endl;
    cout << "X : " << this->x << " Y : " << this->y << endl;
}

void Dauphin::setVitesse(double _vitesse)
{
    this->vitesse = _vitesse;
}

void Dauphin::setProfondeur(double _profondeur)
{
    this->profondeur = _profondeur;
}
