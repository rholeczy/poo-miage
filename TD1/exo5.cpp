#include <iostream>
using namespace std;

struct Point
{
    int x, y;
    char name;
};

void initialise(Point &p, int x, int y, char car)
{
    p.x = x;
    p.y = y;
    p.name = car;
}

void afficher(Point point)
{
    cout << "X : " << point.x << endl;
    cout << "Y : " << point.y << endl;
    cout << "Nom : " << point.name << endl;
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

int main(int argc, char **argv)
{
    Point point;
    initialise(point,3,2,'O');
    modifier(point);
    afficher(point);
    return 0;
}
