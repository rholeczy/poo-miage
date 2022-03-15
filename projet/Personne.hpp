#ifndef PERSONNE_HPP
#define PERSONNE_HPP

class Personne
{

public:
    Personne();
    Personne(std::string _idSecu, std::string _nom, std::string _prenom);
    ~Personne();



protected:
    std::string idSecu;
    std::string nom;
    std::string prenom;
    std::string telephone;
    std::string portable;
    int numAdress;
    std::string rue;
    std::string ville;
    int cp;
    bool contact;
    bool rdv;
    enum vaccination : int;
};
#endif