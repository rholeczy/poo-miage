#ifndef DEF_BANQUE
#define DEF_BANQUE

#include <string>
#include <vector>
#include "Compte.h"

class Banque{

    public :

    
    void showComptes();
    void addCompte(Compte compte);
    void DelCompte(int idCompte);
    Compte getCompte(int idCompte);

    private :
    std::vector<Compte> tableauComptes;


};
#endif