#include <iostream>
#include "Animal.hpp"

using namespace std;

int main(int argc, char **argv)
{

    //Exercice 1
    Animal *animUn = new Animal();
    Animal *animDeux = new Animal(6, "aboie");
    animDeux->vieillir();
    animDeux->presenter();
    animUn->presenter();

    delete animUn;
    delete animDeux;
}
