#include <iostream>
#include "Point.hpp"


using namespace std;

Point::Point()
{
    this->x=0;
    this->y=0;
    cout << "Point crée" << endl;
};

// Destructeur
Point::~Point()
{
    cout << "Point a disparu..." << endl;
}