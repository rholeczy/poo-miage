#include <iostream>
#include "Personne.hpp"
#include <cstring>

using namespace std;

// Constructeur
Personne::Personne(char const *name, char const *surname, int lage)
{
  strcpy(this->nom, name);
  strcpy(this->prenom, surname);
  this->age = lage;
}

// Constructeur par défaut
Personne::Personne()
{
  this->nom[0] = '\0';
  this->prenom[0] = '\0';
  this->age = 0;
}

// Constructeur de copie
Personne::Personne(const Personne &p)
{
  strcpy(nom, p.nom);
  strcpy(prenom, p.prenom);
  age = p.age;
}

// Destructeur
Personne::~Personne() {}

void Personne::affiche()
{
  cout << "Nom : " << this->nom << "\nPrenom :" << this->prenom << "\nAge :" << this->age << endl;
}
