#include <iostream>
#include "Point.hpp"

using namespace std;

// Constructeur
Point::Point(int x, int y, string car)
{
    this->x = x;
    this->y = y;
    this->name = car;
}

// Constructeur de copie
Point::Point(const Point &p)
{
    x = p.x;
    y = p.y;
    name = p.name;
}

// Destructeur
Point::~Point() {}

int Point::distant()
{
    if (this->x > this->y)
    {
        return this->x - this->y;
    }
    else
    {
        return this->y - this->x;
    }
}
void Point::modifier(Point &p)
{
    string rep;
    cout << "Voulez-vous modifier le point ? (y/n) ";
    cin >> rep;

    if (rep == "y")
    {
        cout << "------------- MODIFICATION -------------" << endl;

        cout << "Voulez-vous modifier le x ? ";
        cin >> rep;
        if (rep == "y")
        {
            cout << "Tapez le x : ";
            cin >> p.x;
        }

        cout << "Voulez-vous modifier le y ? ";
        cin >> rep;
        if (rep == "y")
        {
            cout << "Tapez le y : ";
            cin >> p.y;
        }

        cout << "Voulez-vous modifier le nom ? ";
        cin >> rep;
        if (rep == "y")
        {
            cout << "Tapez le nom : ";
            cin >> p.name;
        }
    }
}

void Point::afficher()
{
    cout << "X : " << this->x << endl;
    cout << "Y : " << this->y << endl;
    cout << "Nom : " << this->name << endl;
}