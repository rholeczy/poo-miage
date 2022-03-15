#include <iostream>
#include <map>
#include "Personne.hpp"
#include "Registre.hpp"

using namespace std;

Registre::Registre()
{
    this->leRegistre.clear();
};

Registre::Registre(const Registre &r)
{
    this->leRegistre = r.leRegistre;
};

// Destructeur
Registre::~Registre()
{
}

void Registre::ajout(Personne laPersonne)
{
    if (this->leRegistre.find(laPersonne.getId()) != leRegistre.end())
    {
        cout << "Cette personne est déjà dans ce registre !" << endl;
    }
    else
    {
        this->leRegistre[laPersonne.getId()] = laPersonne;
    }
}

void Registre::affiche()
{
    map<string, Personne>::iterator p; //Création d'un itérator sur le 'map'
    cout << "Voici le contenu du Registre : " << endl;
    for (p = this->leRegistre.begin(); p != this->leRegistre.end(); p++)
    {
        cout << p->first << " : ";
        p->second.afficher();
    }
}