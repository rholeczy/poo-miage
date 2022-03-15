#include <iostream>
#include "Personne.hpp"
using namespace std;

// Constructeur par défaut
Personne::Personne()
{
    this->idSecu = "";
    this->nom = "";
    this->prenom = "";
    this->telephone = "";
    this->portable = "";
    this->numAdress = 0;
    this->rue = "";
    this->ville = "";
    cout << "Personne crée" << endl;
};

// Constructeur
Personne::Personne(string _idSecu,string _nom,string _prenom){
    this->idSecu=_idSecu;
    this->nom=_nom;
    this->prenom=_prenom;
    cout << "Personne crée" << endl;
}

// Constructeur de copie
Personne::Personne(const Personne &p)
{
    this->idSecu = p.idSecu;
    this->nom = p.nom;
    this->prenom = p.prenom;
    this->telephone = p.telephone;
    this->portable = p.portable;
    this->numAdress = p.numAdress;
    this->rue = p.rue;
    this->ville = p.ville;
    this->cp = p.cp;
    cout << "Personne crée" << endl;
};

// Destructeur
Personne::~Personne()
{
    cout << "Personne a disparu..." << endl;
}

string Personne::getId(){
    return idSecu;
}
