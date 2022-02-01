#include <iostream>
#include "Compte.h"
#include "Banque.h"

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

std::string Compte::getName()
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

void Banque::addCompte(Compte compte)
{
    this->tableauComptes.push_back(compte);
}

void Banque::showComptes()
{
    cout << "Liste comptes :\n"
         << endl;
    for (int i(0); i < tableauComptes.size(); ++i)
    //On utilise notes.size() pour la limite de notre boucle
    {
        cout << "Id : " << tableauComptes[i].getId() << " | Nom : " << tableauComptes[i].getName() << " | Solde : " << tableauComptes[i].getSolde() << "€" << endl; //On additionne toutes les notes
    }
}

bool getCompteInlist(int idCompte, std::vector<Compte> tableauComptes)
{
    bool trouve = false;
    while (i < tableauComptes.size())
    {
        if (tableauComptes[i].getId() == idCompte)
        {
            trouve = true;
        }
        i++;
    }
    if (!trouve){
        cout << "Erreur : Id non trouvé dans la liste des comptes.\n"
             << endl;
    }    
    return trouve;
}

Compte Banque::getCompte(int idCompte)
{
    int i = 0;
    if getCompteInList(idCompte, tableauComptes){
        while (i < tableauComptes.size())
        {
            if (tableauComptes[i].getId() == idCompte)
            {
                return tableauComptes[i];
            }
            i++;
        }
    }    
}

void Banque::DelCompte(int idCompte)
{
    int i = 0;
    if getCompteInList(idCompte, tableauComptes){
        while (i < tableauComptes.size())
        {
            if (tableauComptes[i].getId() == idCompte)
            {
                tableauComptes.erase(tableauComptes.begin() + i);

                cout << "\nCompte supprimé.\n"
                     << endl;
                trouve = true;
            }
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    Banque banquePop;
    Compte comptePierre(19, "Pierre Colin", 50000);
    Compte compteJus(3, "Justine Brillouet", 4000);
    Compte compteRobin(7, "Robin Faucher", 2);
    Compte compteBarot(28, "Romain Barot", 17920);

    banquePop.addCompte(comptePierre);
    banquePop.addCompte(compteRobin);
    banquePop.addCompte(compteJus);
    banquePop.addCompte(compteBarot);
    banquePop.showComptes();

    banquePop.DelCompte(7);

    /*Compte compteCopie = banquePop.getCompte(3);
    banquePop.addCompte(compteCopie);*/

    banquePop.showComptes();
    /*
    comptePierre.consultation();
    comptePierre.retrait(12000);
    comptePierre.depot(3000);
    compte.retrait(12000);

    compte.consultation();*/
    return 0;
}
