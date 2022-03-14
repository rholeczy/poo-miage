#include <iostream>
#include "Animal.hpp"
#include "Chien.hpp"

using namespace std;

Chien::Chien()
{
    this->nomducri = "aboie";
    this->cri = "";
    cout << "Chien crée" << endl;
};

Chien::Chien(int _age, string _cri) : Animal(_age, "aboie")
{
    this->cri = _cri;
    cout << "Chien crée" << endl;
};

// Constructeur de copie
Chien::Chien(const Chien &c)
{
    this->cri = c.cri;
    cout << "Chien crée" << endl;
}

// Destructeur
Chien::~Chien()
{
    cout << "Chien mort" << endl;
}

void Chien::presenter()
{

    if (this->age < 6)
    {
        cout << "Le chien a " << this->age << " ans et aboie : " << this->cri << " " << this->cri << " " << this->cri << endl;
    }

    else
    {
        cout << "Le chien a " << this->age << " ans et aboie : " << this->cri << endl;
    }
}