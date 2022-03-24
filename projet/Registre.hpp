#ifndef REGISTRE_HPP
#define REGISTRE_HPP

class Registre
{

public:
    Registre();
    Registre(const Registre &r);
    ~Registre();

    void affiche();
    void afficherPremiereDoseContact();
    void afficherDeuxiemeDoseContact();
    void afficherNoContact();
    void afficherEnAttente();
    void changerPrio(Personne laPersonne);

    void ajout(Personne &laPersonne);
    void supprime(Personne &laPersonne);
    bool verifierId(std::string id);
    Personne getPersonne(std::string id);
    void modifStatutContact(Personne laPersonne, bool estContact);
    void modifStatutRdv(Personne laPersonne, bool enRdv);
    void modifStatutVaccination(Personne laPersonne, Personne::etatVaccinal _etat);

private:
    std::map<std::string, Personne> leRegistre;
};
#endif