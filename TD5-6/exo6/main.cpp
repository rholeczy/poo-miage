#include <iostream>
#include "Point.hpp"
#include "PointColore.hpp"

using namespace std;

int main(int argc, char **argv)
{
    // Les fonctions virtuelles pures vont pouvoir être héritée aux classes filles.
    PointColore *p = new PointColore(22,5); // PointColore crée
    p->setColor("rouge");
    p->affiche();
}
