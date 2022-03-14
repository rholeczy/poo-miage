#include <iostream>
#include "Personne.hpp"

using namespace std;

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
