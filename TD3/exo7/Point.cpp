#include <iostream>
#include "Point.hpp"


using namespace std;

Point::Point()
{
    this->x=0;
    this->y=0;
    cout << "Point crée" << endl;
};

Point::Point(int _x, int _y) {
    cout << "Point crée" << endl;
};

// Constructeur de copie
Point::Point(const Point &p)
{
    this->x=p.x;
    this->y=p.y;
    cout << "Point crée" << endl;
}

// Destructeur
Point::~Point()
{
    cout << "Point a disparu..." << endl;
}

void Point::affiche() {
    cout << "X : " << this->x << " Y : " << this->y << endl;
}