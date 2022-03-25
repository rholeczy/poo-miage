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
    this->vaccin = Fotvoir;
    this->prioritaire = false;
};

// Constructeur
Personne::Personne(string _idSecu, string _nom, string _prenom, string _telephone, string _portable, int _numAdresse, string _rue, string _ville, int _codepostal, bool _estContacte, bool _rdvAccepte, etatVaccinal _etat, Personne::typeVaccin _vaccin)
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
    this->vaccin = _vaccin;
    this->prioritaire = false;
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
    this->vaccin = p.vaccin;
    this->prioritaire = p.prioritaire;
};

// Destructeur
Personne::~Personne()
{
}

// Obtenir le numéro de sécurité.
string Personne::getId()
{
    return idSecu;
}

// Obtenir le type de vaccin choisi.
string Personne::getVaccin()
{
    string res;
    switch (this->vaccin)
    {
    case Suretcertin:
        res = "Suretcertin";
        break;
    case Presksur:
        res = "Presksur";
        break;
    case Fotvoir:
        res = "Fotvoir";
        break;
    }
    return res;
}

// Obtenir le nombre de doses.
int Personne::getEtat()
{
    return this->etat;
}

// Obtenir si une personne est contacté.
bool Personne::getContact()
{
    return this->estContacte;
}

// Obtenir si une personne est en attente d'un rdv.
bool Personne::getAttente()
{
    return this->rdvAccepte;
}

// Afficher les informations d'une personne.
void Personne::afficher()
{
    cout << "{ Prio : " << this->prioritaire << " | Nom : " << this->nom << " | Prénom : " << this->prenom << " | Téléphone : " << this->telephone << " | Nb Vaccins : " << this->etat << " | Conctacté : " << this->estContacte << " | RDV : " << this->rdvAccepte << " | Vaccin: " << this->getVaccin() << " }" << endl;
}

// Modifier la valeure booléenne de la priorité
void Personne::updatePrio()
{
    if (this->prioritaire == true)
    {
        this->prioritaire = false;
    }
    else
    {
        this->prioritaire = true;
    }
}

// Mettre à jour le booléen 'estConctacte'
void Personne::updateContact()
{
    if (this->estContacte == true)
    {
        this->estContacte = false;
    }
    else
    {
        this->estContacte = true;
    }
}

// Mettre à jour le booléen 'rdvAccepte'
void Personne::updateRdv(){
    if (this->estContacte == true)
    {
        this->estContacte = false;
    }
    else
    {
        this->estContacte = true;
    }
}  

// Mettre à jour le nombre de doses pour une personne
void Personne::updateVaccin(){
    switch(this->etat)
    {
    case non_vaccine:
        this->etat=une_dose;
        break;
    case une_dose:
        this->etat=deux_doses;
        break;
    }
}