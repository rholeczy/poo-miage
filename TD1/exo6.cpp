#include <iostream>
#include "PointExo7Debut.h"

using namespace std;

void Point::initialise(int x,int y,char car)
{
   this->x = x;
   this->y = y;
   this->name = car;
}

int Point::distant()
{
 if (this->x > this->y) {
     return this->x - this->y;
 }
 else {
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

int main(int argc, char **argv)
{
    Point point;
    point.initialise(4,5,'B');
    point.modifier(point);
    point.afficher();

    cout << "Distance entre les deux points : "<< point.distant() << endl;
    return 0;
}
