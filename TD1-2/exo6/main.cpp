#include <iostream>
#include "Point.hpp"

using namespace std;

int main(int argc, char **argv)
{
    Point point;
    point.initialise(4,5,'B');
    point.modifier(point);
    point.afficher();

    cout << "Distance entre les deux points : "<< point.distant() << endl;
    return 0;
}
