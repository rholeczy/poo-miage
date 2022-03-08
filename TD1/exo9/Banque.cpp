#include <iostream>
#include <vector>
#include "Compte.hpp"
#include "Banque.hpp"
using namespace std;

void Banque::addCompte(Compte compte)
{
    this->tableauComptes.push_back(compte);
}

void Banque::showComptes()
{
    cout << "Liste comptes :\n"
         << endl;
    for (int i(0); i < tableauComptes.size(); ++i)
    
    {
        cout << "Id : " << tableauComptes[i].getId() << " | Nom : " << tableauComptes[i].getName() << " | Solde : " << tableauComptes[i].getSolde() << "€" << endl;
    }
}

Compte Banque::getCompte(int idCompte)
{
    int i = 0;
    while (i < tableauComptes.size())
    {
        if (tableauComptes[i].getId() == idCompte)
        {
            return tableauComptes[i];
        }
        i++;
    }
    cout << "Erreur : Id non trouvé dans la liste des comptes.\n"
         << endl;
}

void Banque::DelCompte(int idCompte)
{
    int i = 0;
    bool trouve = false;
    while ((!trouve) && i < tableauComptes.size())
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
    if (!trouve){
        cout << "Erreur : Id non trouvé dans la liste des comptes.\n"
             << endl;}
}
