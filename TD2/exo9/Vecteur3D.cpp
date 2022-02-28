#include <iostream>
#include "Vecteur3D.hpp"

using namespace std;

// Constructeur
Vecteur3D::Vecteur3D(int abs, int ord, int cot)
{
    this->x = abs;
    this->y = ord;
    this->z = cot;
}

// Constructeur par défaut
Vecteur3D::Vecteur3D()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

void Vecteur3D::affiche()
{
    cout << "\nX : " << this->x << "\nY :" << this->y << "\nZ :" << this->z << endl;
}

void Vecteur3D::afficher(const char *message)
{
    cout << "\n" << message << endl;
    cout << "\nX : " << this->x << "\nY :" << this->y << "\nZ :" << this->z << endl;
}