#include <iostream>
#include "Vecteur3D.hpp"
using namespace std;

int main(int argc, char **argv)
{
    Vecteur3D *vecZero = new Vecteur3D();
    Vecteur3D *vecUn = new Vecteur3D(22, 5, 2001);
    Vecteur3D *vecDeux = new Vecteur3D(1, 8, 2000);
    vecZero->afficher("Vecteur par défaut :");
    vecUn->affiche();
    vecDeux->afficher("Vecteur Deux :");
}
