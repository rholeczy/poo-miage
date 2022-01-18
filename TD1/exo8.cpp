#include <iostream>
#include "Point.h"

using namespace std;

// Constructeur
Point::Point(int x, int y, string car)
{
    this->x = x;
    this->y = y;
    this->name = car;
    this->nb_default = 0;
    this->nb_param = 0;
    this->nb_copie = 0;
    this->nd_destruc = 0;
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

// Les afficher du 8.1
void Point::afficherDefault()
{
    cout << this->nb_default << endl;
}

void Point::afficherCopie()
{
    cout << this->nb_copie << endl;
}

void Point::afficherParam()
{
    cout << this->nb_param << endl;
}

void Point::afficherDestruc()
{
    cout << this->nd_destruc << endl;
}

int main(int argc, char **argv)
{

    Point *point;
    point = new Point(12, 6, "ABC");
    Point copie = *point;

    delete point;

    //point.modifier(copie);
    copie.afficher();

    cout << "Distance entre les deux points : " << copie.distant() << endl;
    return 0;
}
