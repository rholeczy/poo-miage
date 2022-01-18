#ifndef DEF_COMPTE
#define DEF_COMPTE

#include <string>

class Compte {

    public :

    Compte(int id,std::string name,int sold);
    void consultation();
    void retrait(int amount);
    void depot(int amount);

    private :

    int idClient;
    std::string nameClient;
    int soldClient;
};
#endif