#include <iostream>
#include "Animal.hpp"
#include "Poisson.hpp"

using namespace std;

Poisson::Poisson(){
    this->profondeur=0;
    cout << "Poisson crée" << endl;
};

// Constructeur de copie
Poisson::Poisson(const Poisson &p)
{
    this->profondeur=p.profondeur;
    cout << "Poisson crée" << endl;
}

// Destructeur
Poisson::~Poisson() {
    cout << "Poisson mort" << endl;
}

