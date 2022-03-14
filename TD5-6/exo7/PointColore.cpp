#include <iostream>
#include "Point.hpp"
#include "Couleur.hpp"
#include "PointColore.hpp"

using namespace std;

PointColore::PointColore()
{
    cout << "PointColore crée" << endl;
};

PointColore::PointColore(int _x, int _y) : Point(_x, _y)
{
    this->x = _x;
    this->y = _y;
    cout << "PointColore crée" << endl;
};

// Constructeur de copie
PointColore::PointColore(const PointColore &pc)
{
    this->couleur = pc.couleur;
    cout << "PointColore crée" << endl;
}

// Destructeur
PointColore::~PointColore()
{
    cout << "PointColore a disparu..." << endl;
}

void PointColore::affiche()
{
    cout << "X : " << this->x << " Y : " << this->y << endl;
    cout << "Couleur : " << this->couleur << endl;
}