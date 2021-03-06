#include <iostream>
#include "Masse.hpp"

using namespace std;

// Constructeur par défaut
Masse::Masse()
{
    this->masse = 0;
    cout << "Masse crée" << endl;
};

Masse::Masse(int _masse)
{
    this->masse = _masse;
    cout << "Masse crée" << endl;
};

// Constructeur de copie
Masse::Masse(const Masse &m)
{
    this->masse = m.masse;
    cout << "Masse crée" << endl;
}

// Destructeur
Masse::~Masse()
{
    cout << "Masse a disparu..." << endl;
}

void Masse::affiche()
{
    cout << "Masse : " << this->masse << endl;
}

void Masse::setMasse(int _masse)
{
    this->masse = _masse;
}