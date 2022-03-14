#include <iostream>

using namespace std;

int sommeInt(int v1, int v2);
float sommeFloat(float v1, float v2);
int *sommeArray(int *tabUn, int *tabDeux);

int main(int argc, char **argv)
{

    cout << "Somme des deux int : " << sommeInt(12, 24) << endl;         // La somme de deux entiers (int)
    cout << "Somme des deux float : " << sommeFloat(22.0, 21.0) << endl; // La somme de deux réels (float)

    int tab1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tab2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *tab3 = sommeArray(tab1, tab2); // Somme de deux arrays

    cout << "Somme des deux tableaux : [";
    for (int i = 0; i < 10; i++)
    {
        cout << tab3[i] << ",";
    }
    cout << "]" << endl;

    //Si on fait appel à deux shorts cela ne change rien car ils feront comme la taille des int c'est à dire 2 octets.

    // Il est possible aussi de créer une fonction somme avec 3 paramètres de même type.
    // Cependant il est aussi possible de créer un fonction somme avec deux paramètres différents seulement si on "transforme" l'une des deux variables dans la fonction.
}

int sommeInt(int v1, int v2) { return v1 + v2; }
float sommeFloat(float v1, float v2) { return v1 + v2; }

int *sommeArray(int *tabUn, int *tabDeux)
{
    int *tabTrois = new int[10];
    for (int i = 0; i < 10; i++)
    {
        tabTrois[i] = tabUn[i] + tabDeux[i];
    }
    return tabTrois;
}