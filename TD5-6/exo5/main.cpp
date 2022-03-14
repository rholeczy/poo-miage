#include <iostream>
#include "Animal.hpp"
#include "Chien.hpp"
#include "Poisson.hpp"
#include "Mammifere.hpp"
#include "Dauphin.hpp"

using namespace std;

int main(int argc, char **argv)
{

    Dauphin *d = new Dauphin(12,"siffle"); // Dauphin crée
    d->setGenre(true);
    d->setName("Flipper");
    d->deplacer(23,54);
    d->engendrer();
    d->setProfondeur(300);
    d->setVitesse(130);
    d->presenter();

    delete d;
    
}
