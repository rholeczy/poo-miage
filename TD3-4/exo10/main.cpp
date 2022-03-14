#include <iostream>
#include "Vecteur3D.hpp"
using namespace std;

int main(int argc, char **argv)
{
    // Exercice 9
    Vecteur3D *vecZero = new Vecteur3D();
    Vecteur3D *vecUn = new Vecteur3D(22, 5, 2001);
    Vecteur3D *vecDeux = new Vecteur3D(1, 8, 2000);
    vecZero->affiche("Vecteur par défaut :");
    vecUn->affiche();
    vecDeux->affiche("Vecteur Deux :");

    // Exercice 10
    cout << "VecZero et VecUn coincide ? : " << vecZero->coincide(*vecUn) << endl;
    vecZero->fixer_abscisse(22);
    vecZero->fixer_ordonnee(5);
    vecZero->fixer_cote(2001);
    cout << "VecZero et VecUn coincide ? : " << vecZero->coincide(*vecUn) << endl;
}
