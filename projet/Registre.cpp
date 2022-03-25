#include <iostream>
#include <map>
#include "Personne.hpp"
#include "Registre.hpp"

using namespace std;

// Constructeur par défaut
Registre::Registre()
{
    this->leRegistre.clear();
}

// Constructeur de copie
Registre::Registre(const Registre &r)
{
    this->leRegistre = r.leRegistre;
}

// Destructeur
Registre::~Registre()
{
}

// ajouter une personne dans le registre.
void Registre::ajout(Personne &laPersonne)
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

// supprimer une personne dans le registre.
void Registre::supprime(Personne &laPersonne)
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

// Afficher le contenu du registre.
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

// Afficher les personnes à contacter pour une première dose.
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

// Afficher les personnes à contacter pour une deuxième dose.
void Registre::afficherDeuxiemeDoseContact()
{
    map<string, Personne>::iterator p;
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

// Afficher les personnes non contactées.
void Registre::afficherNoContact()
{
    map<string, Personne>::iterator p;
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

// Afficher les personnes en attente d'un rdv.
void Registre::afficherEnAttente()
{
    map<string, Personne>::iterator p;
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

// Vérifier si une personne est dans le registre avec le numéro de sécu.
bool Registre::verifierId(string id)
{
    if (this->leRegistre.find(id) != this->leRegistre.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Fonction qui change la priorité de quelqu'un.
void Registre::changerPrio(Personne laPersonne)
{
    laPersonne.updatePrio();
    this->leRegistre[laPersonne.getId()] = laPersonne;
}

// Modifier le statut du booléen contacté.
void Registre::modifStatutContact(Personne laPersonne)
{
    laPersonne.updateContact();
    this->leRegistre[laPersonne.getId()] = laPersonne;
}

// Modifier le statut du booléen rdv.
void Registre::modifStatutRdv(Personne laPersonne)
{
    laPersonne.updateRdv();
    this->leRegistre[laPersonne.getId()] = laPersonne;
}

// Modifier le statut de la vaccination.
void Registre::modifStatutVaccination(Personne laPersonne)
{
    laPersonne.updateVaccin();
    this->leRegistre[laPersonne.getId()] = laPersonne;
}

Personne Registre::getPersonne(string id)
{
    return this->leRegistre[id];
}