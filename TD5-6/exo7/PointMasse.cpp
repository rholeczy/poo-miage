#include <iostream>
#include "Point.hpp"
#include "Masse.hpp"
#include "PointMasse.hpp"

using namespace std;

// Constructeur par défaut
PointMasse::PointMasse()
{
    cout << "PointMasse crée" << endl;
};

PointMasse::PointMasse(int _x, int _y) : Point(_x, _y)
{
    this->x = _x;
    this->y = _y;
    cout << "PointMasse crée" << endl;
};

// Constructeur de copie
PointMasse::PointMasse(const PointMasse &pm)
{
    this->masse = pm.masse;
    cout << "PointMasse crée" << endl;
}

// Destructeur
PointMasse::~PointMasse()
{
    cout << "PointMasse a disparu..." << endl;
}

void PointMasse::affiche()
{
    cout << "X : " << this->x << " Y : " << this->y << endl;
    cout << "Masse : " << this->masse << endl;
}