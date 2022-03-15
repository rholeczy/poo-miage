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
    this->numAdresse = 0;
    this->rue = "";
    this->ville = "";
    this->codePostal = 0;
    this->estContacte = false;
    this->rdvAccepte = false;
    this->etat = non_vaccine;
    cout << "Personne crée" << endl;
};

// Constructeur
Personne::Personne(string _idSecu, string _nom, string _prenom, string _telephone, string _portable, int _numAdresse, string _rue, string _ville, int _codepostal, bool _estContacte, bool _rdvAccepte, etatVaccinal _etat)
{
    this->idSecu = _idSecu;
    this->nom = _nom;
    this->prenom = _prenom;
    this->telephone = _telephone;
    this->portable = _portable;
    this->numAdresse = _numAdresse;
    this->rue = _rue;
    this->ville = _ville;
    this->codePostal = _codepostal;
    this->estContacte = _estContacte;
    this->rdvAccepte = _rdvAccepte;
    this->etat = _etat;
}

// Constructeur de copie
Personne::Personne(const Personne &p)
{
    this->idSecu = p.idSecu;
    this->nom = p.nom;
    this->prenom = p.prenom;
    this->telephone = p.telephone;
    this->portable = p.portable;
    this->numAdresse = p.numAdresse;
    this->rue = p.rue;
    this->ville = p.ville;
    this->codePostal = p.codePostal;
    this->estContacte = p.estContacte;
    this->rdvAccepte = p.rdvAccepte;
    this->etat = p.etat;
};

// Destructeur
Personne::~Personne()
{
}

string Personne::getId()
{
    return idSecu;
}

void Personne::afficher()
{
    cout << "{ Nom : " << this->nom << " | Prénom : " << this->prenom << " | Téléphone : " << this->telephone << " | Etat : " << this->etat << " | Conctacté : " << this->estContacte << " | RDV : " << this->rdvAccepte << " }" << endl;
}