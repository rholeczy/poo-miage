#include <iostream>
#include "Point.hpp"
#include "Couleur.hpp"
#include "Masse.hpp"
#include "PointColore.hpp"
#include "PointMasse.hpp"
#include "PointColMas.hpp"

using namespace std;

PointColMas::PointColMas()
{
    cout << "PointColMas crée" << endl;
};

PointColMas::PointColMas(int _x, int _y) : Point(_x, _y)
{
    this->x = _x;
    this->y = _y;
    cout << "PointColMas crée" << endl;
};

// Constructeur de copie
PointColMas::PointColMas(const PointColMas &pcm)
{
    this->couleur = pcm.couleur;
    this->masse = pcm.masse;
    cout << "PointColMas crée" << endl;
}

// Destructeur
PointColMas::~PointColMas()
{
    cout << "PointColMas a disparu..." << endl;
}

void PointColMas::affiche()
{
    cout << "X : " << this->x << " Y : " << this->y << endl;
    cout << "Couleur : " << this->couleur << endl;
    cout << "Masse : " << this->masse << endl;
}