#include <iostream>
#include "Point.h"

using namespace std;

class Point
{

public:
    void initialise(Point &p, int x, int y, char car)
    {
        p.x = x;
        p.y = y;
        p.name = car;
    }

    void modifier(Point &p)
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

    void afficher(Point point)
    {
        cout << "X : " << point.x << endl;
        cout << "Y : " << point.y << endl;
        cout << "Nom : " << point.name << endl;
    }

private:
    int x, y;
    char name;
};

int main(int argc, char **argv)
{
    Point point;
    point.initialise(point,4,6,'O');
    point.modifier(point);
    point.afficher(point);
    return 0;
}
