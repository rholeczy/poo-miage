#include <iostream>
#include "Poisson.hpp"
#include "Mammifere.hpp"
#include "Dauphin.hpp"

using namespace std;

Dauphin::Dauphin(){
    this->vitesse=0;
    this->profondeur=0;
    cout << "Dauphin crée" << endl;
};