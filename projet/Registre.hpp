#ifndef REGISTRE_HPP
#define REGISTRE_HPP

class Registre
{

public:
    Registre();
    Registre(const Registre &r);
    ~Registre();

    void affiche();
    void ajout(Personne laPersonne);
    void modifStatutAppel(Personne laPersonne, bool action);
    void modifStatutRdv(Personne laPersonne, bool reponse);
    void modifStatutVaccination(Personne laPersonne, Personne::etatVaccinal etat);

private:
    std::map<std::string, Personne> leRegistre;
};
#endif