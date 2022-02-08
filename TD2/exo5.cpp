#include <iostream>

using namespace std;

#include "Personne.hpp"
#include <cstring>

// Constructeur
Personne::Personne(char const *name, char const *surname, int lage)
{
    strcpy(this->nom, name);
    strcpy(this->prenom, surname);
    this->age = lage;
}

// Constructeur par défaut
Personne::Personne()
{
    this->nom[0] = '\0';
    this->prenom[0] = '\0';
    this->age = 0;
}

// Constructeur de copie
Personne::Personne(const Personne &p)
{
    strcpy(nom, p.nom);
    strcpy(prenom, p.prenom);
    age = p.age;
}

// Destructeur
Personne::~Personne()
{
    delete[] nom;
    delete[] prenom;
}

void Personne::affiche() const
{
    // On ne peut pas modifier car on a const donc l'objet est non modifiable.
    cout << "Nom : " << this->nom << "\nPrenom :" << this->prenom << "\nAge :" << this->age << endl;
}

void affiche(const int &n);

int main(int argc, char **argv)
{
    //int *p1=&MAX1;
    //Remplace toutes les occurrences du mot MAX1 dans le fichier source par le nombre 100.
    //int *p2=&MAX2;
    //Définit une constante réelle représentée par 100 à laquelle on peut accéder dans le code.

    Personne *moi = new Personne("Holeczy", "Romain", 20);
    moi->affiche();
}

void affiche(const int &n)
{
    // Le const mot clé spécifie que la valeur d'une variable est constante et indique au compilateur d'empêcher le programmeur de le modifier.
    cout << n << endl;
    // Le const nous empeche de modifier la valeure de n.
}


