#include <iostream>
#include <map>
#include "Personne.hpp"
#include "Patient.hpp"
#include "Registre.hpp"

using namespace std;

int main(int argc, char **argv)
{
    Registre *registreVaccin = new Registre();
    Personne *romainDarnis = new Personne("1010719031", "DARNIS", "Romain","0633384993","0633384993","Gradignan"); // PointColMas crée

    registreVaccin->ajout(*romainDarnis);
    registreVaccin->affiche();
    delete romainDarnis;
    delete registreVaccin;
}
