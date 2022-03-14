#include <iostream>
#include "Animal.hpp"
#include "Poisson.hpp"
#include "Mammifere.hpp"
#include "Dauphin.hpp"

using namespace std;

Dauphin::Dauphin()
{
    this->cri="";
    cout << "Dauphin crée" << endl;
};

// Constructeur de copie
Dauphin::Dauphin(const Dauphin &d)
{
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
