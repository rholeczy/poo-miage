#include <iostream>
#include "Couleur.hpp"

using namespace std;

Couleur::Couleur()
{
    this->couleur = "";
    cout << "Couleur crée" << endl;
};

Couleur::Couleur(string _couleur)
{
    this->couleur = _couleur;
    cout << "Couleur crée" << endl;
};

// Constructeur de copie
Couleur::Couleur(const Couleur &c)
{
    this->couleur = c.couleur;
    cout << "Couleur crée" << endl;
}

// Destructeur
Couleur::~Couleur()
{
    cout << "Couleur a disparu..." << endl;
}

void Couleur::affiche()
{
    cout << "Couleur : " << this->couleur << endl;
}

void Couleur::setColor(std::string _couleur)
{
    this->couleur = _couleur;
}