#include <iostream>
#include "Compte.hpp"
#include "Banque.hpp"
using namespace std;

// Constructeur
Compte::Compte(int id, string name, int sold)
{
    this->idClient = id;
    this->nameClient = name;
    this->soldClient = sold;
}

void Compte::consultation()
{
    cout << "Id du Compte : " << this->idClient << "\nPropriétaire du compte :" << this->nameClient << "\nSolde du compte :" << this->soldClient << endl;
}

void Compte::depot(int amount)
{
    this->soldClient += amount;
    cout << "Depôt réussi\n"
         << endl;
}

void Compte::retrait(int amount)
{
    if (this->soldClient >= amount)
    {
        this->soldClient -= amount;
        cout << "Retrait effectué\n"
             << endl;
    }

    else
    {
        cout << "Refus pas assez d'argent sur le compte\n"
             << endl;
    }
}

string Compte::getName()
{
    return this->nameClient;
}

int Compte::getId()
{
    return this->idClient;
}

int Compte::getSolde()
{
    return this->soldClient;
}

