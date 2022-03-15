#include <iostream>
#include <map>
#include "Personne.hpp"
#include "Registre.hpp"

using namespace std;

int main(int argc, char **argv)
{
    Registre *registreVaccin = new Registre();

    // Darnis : est contacté , mais il n'a pas de rendez-vous prévu, et il a une dose.
    Personne *romainDarnis = new Personne("1010746033569", "DARNIS", "Romain", "0633384933", "0633384933",38, "cours du Général de Gaulle", "Gradignan",33170,true,false,Personne::une_dose);

    // Holeczy : est pas contacté et pas de rendez-vous prévu, et il a deux doses.
    Personne *romainHoleczy = new Personne("1010518036729", "HOLECZY", "Romain", "0661345502", "0661345502",50, "cours du Général de Gaulle", "Gradignan",33170,false,false,Personne::deux_doses);

    // Billaud : est contacté et a un rendez-vous prévu, et non-vacciné.
    Personne *michelBillaud = new Personne("10106133074829", "BILLAUD", "Michel", "0663389665", "0663389665",10, "rue Johann Strauss", "Pessac",33600,false,false,Personne::non_vaccine);

    registreVaccin->ajout(*romainDarnis);
    registreVaccin->ajout(*romainHoleczy);
    registreVaccin->ajout(*michelBillaud);
    
    registreVaccin->affiche();
 
}
