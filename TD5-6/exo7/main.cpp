#include <iostream>
#include "Point.hpp"
#include "Couleur.hpp"
#include "Masse.hpp"
#include "PointColore.hpp"
#include "PointMasse.hpp"
#include "PointColMas.hpp"

using namespace std;

int main(int argc, char **argv)
{

    PointColMas *p = new PointColMas(22, 5); // PointColMas crée
    p->setColor("Rouge");
    p->setMasse(22);
    p->affiche();
    delete p;
}
