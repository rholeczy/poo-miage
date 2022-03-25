#ifndef PERSONNE_HPP
#define PERSONNE_HPP

class Personne
{

public:
    enum typeVaccin // enum du type de vaccin pour une personne
    {
        Suretcertin=0,
        Presksur=1,
        Fotvoir=2
    };
    enum etatVaccinal // enum pour l'état vaccinal d'une personne
    {
        non_vaccine = 0,
        une_dose = 1,
        deux_doses = 2
    };

    Personne(); // Constructeur par défaut
    Personne(std::string _idSecu, std::string _nom, std::string _prenom, std::string _telephone, std::string _portable, int _numAdresse, std::string _rue, std::string _ville, int _codepostal, bool _estContacte, bool _rdvAccepte, etatVaccinal _etat, typeVaccin _vaccin);
    Personne(const Personne &p); // Constructeur de copie
    ~Personne(); // Destructeur

    void afficher(); // Afficher les informations d'une personne.
    void updatePrio(); // Modifier la valeure booléenne de la priorité

    std::string getId(); // Obtenir le numéro de sécurité.
    std::string getVaccin(); // Obtenir le type de vaccin choisi.
    int getEtat(); // Obtenir le nombre de doses.
    bool getContact(); // Obtenir si une personne est contacté.
    bool getAttente(); // Obtenir si une personne est en attente d'un rdv.

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
    typeVaccin vaccin;
    bool prioritaire;
};
#endif