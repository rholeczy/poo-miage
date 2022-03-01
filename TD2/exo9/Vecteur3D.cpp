#include <iostream>
#include "Vecteur3D.hpp"

using namespace std;

void Vecteur3D::affiche()
{
    cout << "\nX : " << this->x << "\nY :" << this->y << "\nZ :" << this->z << endl;
}

void Vecteur3D::affiche(const char *message)
{
    cout << "\n" << message << endl;
    cout << "\nX : " << this->x << "\nY :" << this->y << "\nZ :" << this->z << endl;
}