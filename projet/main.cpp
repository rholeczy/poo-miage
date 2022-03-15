#include <iostream>
#include "Personne.hpp"
#include "Patient.hpp"
#include "Registre.hpp"

using namespace std;

int main(int argc, char **argv)
{
    Registre *registreVaccin = new Registre();
    Personne *romainDarnis = new Personne("1010719031","DARNIS","Romain"); // PointColMas crée
    
    registreVaccin->ajout(*romainDarnis);

    delete romainDarnis;
}
