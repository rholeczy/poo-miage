#include <iostream>
#include "Animal.hpp"
#include "Mammifere.hpp"

using namespace std;

Mammifere::Mammifere() {
    this->age=0;

}
// Constructeur de copie
Mammifere::Mammifere(const Mammifere &m)
{
    cout << "Mammifere crée" << endl;
}

// Destructeur
Mammifere::~Mammifere() {
    cout << "Mammifere mort" << endl;
}
