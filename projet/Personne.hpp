#ifndef PERSONNE_HPP
#define PERSONNE_HPP

class Personne
{

public:
    Personne(std::string idSecu, std::string nom, std::string prenom);
    ~Personne();

    void affiche();

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
};
#endif