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
Personne::Personne(string _idSecu,string _nom,string _prenom,string _telephone,string _portable,string _ville){
    this->idSecu=_idSecu;
    this->nom=_nom;
    this->prenom=_prenom;
    this->telephone=_telephone;
    this->portable=_portable;
    this->ville=_ville;
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
};

// Destructeur
Personne::~Personne()
{
}

string Personne::getId(){
    return idSecu;
}

void Personne::afficher() {
cout << "{ Nom : " << this->nom << " | Prénom : " << this->prenom << " | Telephone : " << this->telephone << " | Portable : " << this->portable << " | Ville : " << this->ville << " }" << endl;
}