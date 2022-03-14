#include <iostream>
#include "Point.hpp"

using namespace std;

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
