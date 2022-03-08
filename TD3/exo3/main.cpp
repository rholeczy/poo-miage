#include <iostream>
#include "Animal.hpp"
#include "Chien.hpp"

using namespace std;

int main(int argc, char **argv)
{

    //Exercice 3
    Chien *rex = new Chien(3, "Woof"); // Animal Crée , Chien crée
    rex->vieillir();
    rex->presenter();

    delete rex; // Chien mort, Animal mort
}
