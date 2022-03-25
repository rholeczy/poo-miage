#ifndef REGISTRE_HPP
#define REGISTRE_HPP

class Registre
{

public:
    Registre(); // Constructeur par défaut
    Registre(const Registre &r); // Constructeur de copie
    ~Registre(); // Destructeur

    void affiche(); // Afficher le contenu du registre.
    void afficherPremiereDoseContact(); // Afficher les personnes à contacter pour une première dose.
    void afficherDeuxiemeDoseContact(); // Afficher les personnes à contacter pour une deuxième dose.
    void afficherNoContact(); // Afficher les personnes non contactées.
    void afficherEnAttente(); // Afficher les personnes en attente d'un rdv.
    void changerPrio(Personne laPersonne); // Fonction qui change la priorité de quelqu'un.

    void ajout(Personne &laPersonne); // ajouter une personne dans le registre.
    void supprime(Personne &laPersonne);// supprimer une personne dans le registre.
    bool verifierId(std::string id);// Vérifier si une personne est dans le registre avec le numéro de sécu.
    Personne getPersonne(std::string id);

    void modifStatutContact(std::string id);// Modifier le statut du booléen contacté.
    void modifStatutRdv(std::string id);// Modifier le statut du booléen rdv.
    void modifStatutVaccination(std::string id);// Modifier le statut de la vaccination.

private:
    std::map<std::string, Personne> leRegistre; // map du registre de personnes.
};
#endif