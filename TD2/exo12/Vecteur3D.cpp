#include <iostream>
#include "Vecteur3D.hpp"

using namespace std;

int Vecteur3D::abscisse()
{
    return this->x;
}

int Vecteur3D::ordonnee()
{
    return this->y;
}

int Vecteur3D::cote()
{
    return this->z;
}

int coincide(Vecteur3D v1, Vecteur3D v2)
{
    if ((v1.abscisse() == v2.abscisse()) && (v1.ordonnee() == v2.ordonnee()) && (v1.cote() == v2.cote()))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Vecteur3D::fixer_abscisse(int nouvAbs)
{
    this->x = nouvAbs;
}

void Vecteur3D::fixer_ordonnee(int nouvOrd)
{
    this->y = nouvOrd;
}

void Vecteur3D::fixer_cote(int nouvCote)
{
    this->z = nouvCote;
}
void Vecteur3D::affiche()
{
    cout << "\nX : " << this->x << "\nY : " << this->y << "\nZ : " << this->z << endl;
}

void Vecteur3D::affiche(const char *message)
{
    cout << "\n"
         << message << endl;
    cout << "\nX : " << this->x << "\nY : " << this->y << "\nZ : " << this->z << endl;
}