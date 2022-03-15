#include <iostream>
#include <map>
#include "Personne.hpp"
#include "Registre.hpp"

using namespace std;

Registre::Registre()
{
    this->leRegistre.clear();
    cout << "Registre crée" << endl;
};

Registre::Registre(const Registre &r)
{
    this->leRegistre = r.leRegistre;
    cout << "Registre crée" << endl;
};

// Destructeur
Registre::~Registre()
{
    cout << "Registre a disparu..." << endl;
}