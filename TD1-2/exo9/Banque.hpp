#ifndef DEF_BANQUE
#define DEF_BANQUE
#include <vector>

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