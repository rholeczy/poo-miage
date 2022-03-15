#include <iostream>
#include "Personne.hpp"
#include "Patient.hpp"

using namespace std;

// Constructeur par défaut
Patient::Patient()
{
    cout << "Patient crée" << endl;
};

// Constructeur
Patient::Patient(string _idSecu, string _nom, string _prenom): Personne(_idSecu,_nom,_prenom){
   cout << "Patient crée" << endl;
}

// Constructeur de copie
Patient::Patient(const Personne &pa)
{
    cout << "Personne crée" << endl;
};

// Destructeur
Personne::~Personne()
{
    cout << "Personne a disparu..." << endl;
}