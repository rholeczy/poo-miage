#ifndef PERSONNE_HPP
#define PERSONNE_HPP

class Personne
{

public:
    enum etatVaccinal
    {
        non_vaccine=0,
        une_dose=1,
        deux_doses=2
    };

    Personne();
    Personne(std::string _idSecu, std::string _nom, std::string _prenom, std::string _telephone, std::string _portable,int _numAdresse, std::string _rue, std::string _ville,int _codepostal,bool _estContacte,bool _rdvAccepte, etatVaccinal _etat);
    Personne(const Personne &p);
    ~Personne();

    std::string getId();
    void afficher();

private:
    std::string idSecu;
    std::string nom;
    std::string prenom;
    std::string telephone;
    std::string portable;
    int numAdresse;
    std::string rue;
    std::string ville;
    int codePostal;
    bool estContacte;
    bool rdvAccepte;
    etatVaccinal etat;
};
#endif