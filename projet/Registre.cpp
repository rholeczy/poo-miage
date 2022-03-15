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

void Registre::ajout(Personne laPersonne)
{
    if (this->leRegistre.find("") != leRegistre.end())
    {
        cout << "Cette personne est déjà dans ce registre !" << endl;
    }
    else
    {
        this->leRegistre[laPersonne.getId()] = laPersonne;
    }
}