#include <iostream>
#include "Compte.hpp"
#include "Banque.hpp"

using namespace std;

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