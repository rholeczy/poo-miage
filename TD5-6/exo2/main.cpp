#include <iostream>
#include "Animal.hpp"
#include "Chien.hpp"

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

    //Exercice 2
    Chien *rex = new Chien(3, "Woof");
    rex->vieillir();
    rex->presenter();

    Animal *chouchou = new Animal(2, "Haw");
    chouchou->presenter();

    // Possible
    chouchou = rex; // Impossible d'assigner une valeure Animal à un chien mais le contraire est possible.


    delete chouchou;
    
}
