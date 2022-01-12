#include <iostream>
#include "Point.h"

using namespace std;

void Point::initialise(Point &p,int x,int y,char car)
{
   p.x = x;
   p.y = y;
   p.name = car;
}

int Point::distant(Point p)
{
 if (p.x > p.y) {
     return p.x - p.y;
 }
 else {
     return p.y - p.x;
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

void Point::afficher(Point point)
{
    cout << "X : " << point.x << endl;
    cout << "Y : " << point.y << endl;
    cout << "Nom : " << point.name << endl;
}

int main(int argc, char **argv)
{
    Point point;
    point.initialise(point,4,5,'B');
    point.modifier(point);
    point.afficher(point);

    cout << "Distance entre les deux points : "<< point.distant(point) << endl;
    return 0;
}
