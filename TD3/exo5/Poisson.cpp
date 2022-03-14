#include <iostream>
#include "Animal.hpp"
#include "Poisson.hpp"

using namespace std;

Poisson::Poisson(){
    cout << "Poisson crée" << endl;
};

// Constructeur de copie
Poisson::Poisson(const Poisson &p)
{
    cout << "Poisson crée" << endl;
}

// Destructeur
Poisson::~Poisson() {
    cout << "Poisson mort" << endl;
}
