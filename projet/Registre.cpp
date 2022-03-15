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

void Registre::supprime(Personne laPersonne)
{
    if (this->leRegistre.find(laPersonne.getId()) == leRegistre.end())
    {
        cout << "Cette personne est pas dans la registre !" << endl;
    }
    else
    {
        this->leRegistre.erase(laPersonne.getId());
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

void Registre::afficherPremiereDoseContact()
{
    map<string, Personne>::iterator p; //Création d'un itérator sur le 'map'
    cout << "Voici le contenu du Registre : " << endl;
    for (p = this->leRegistre.begin(); p != this->leRegistre.end(); p++)
    {
        if ((p->second.getEtat() == p->second.non_vaccine) && (!p->second.getContact()))
        {
            cout << p->first << " : ";
            p->second.afficher();
        }
    }
}

void Registre::afficherDeuxiemeDoseContact()
{
    map<string, Personne>::iterator p; //Création d'un itérator sur le 'map'
    cout << "Voici le contenu du Registre : " << endl;
    for (p = this->leRegistre.begin(); p != this->leRegistre.end(); p++)
    {
        if ((p->second.getEtat() == p->second.une_dose) && (!p->second.getContact()))
        {
            cout << p->first << " : ";
            p->second.afficher();
        }
    }
}

void Registre::afficherNoContact()
{
    map<string, Personne>::iterator p; //Création d'un itérator sur le 'map'
    cout << "Voici le contenu du Registre : " << endl;
    for (p = this->leRegistre.begin(); p != this->leRegistre.end(); p++)
    {
        if (!p->second.getContact())
        {
            cout << p->first << " : ";
            p->second.afficher();
        }
    }
}

void Registre::afficherEnAttente()
{
    map<string, Personne>::iterator p; //Création d'un itérator sur le 'map'
    cout << "Voici le contenu du Registre : " << endl;
    for (p = this->leRegistre.begin(); p != this->leRegistre.end(); p++)
    {
        if (p->second.getAttente())
        {
            cout << p->first << " : ";
            p->second.afficher();
        }
    }
}

void Registre::changerPrio(Personne laPersonne)
{
    laPersonne.updatePrio();
    supprime(laPersonne);
    ajout(laPersonne);
}
