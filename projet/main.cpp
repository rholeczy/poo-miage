#include <iostream>
#include <map>
#include "Personne.hpp"
#include "Registre.hpp"


using namespace std;

int main(int argc, char **argv)
{
    Registre *registreVaccin = new Registre();

    // Darnis : est contacté , et rendez-vous prévu, et il a une dose.
    Personne *romainDarnis = new Personne("1010746033569", "DARNIS", "Romain", "0633384933", "0633384933",38, "cours du Général de Gaulle", "Gradignan",33170,true,true,Personne::une_dose,Personne::Presksur);

    // Holeczy : est pas contacté et pas de rendez-vous prévu, et il a deux doses.
    Personne *romainHoleczy = new Personne("1010518036729", "HOLECZY", "Romain", "0661345502", "0661345502",50, "cours du Général de Gaulle", "Gradignan",33170,false,false,Personne::deux_doses,Personne::Suretcertin);

    // Billaud : est contacté et a un rendez-vous prévu, et non-vacciné.
    Personne *michelBillaud = new Personne("1560891223027", "BILLAUD", "Michel", "0663389665", "0663389665",10, "rue Johann Strauss", "Pessac",33600,true,true,Personne::non_vaccine,Personne::Fotvoir);

    // Mery : est pas contacté et a pas de rendez-vous prévu, et une dose.
    Personne *brunoMery = new Personne("1991116710840", "MERY", "Bruno", "0667251637", "0667251637",9, "rue Michel Montaigne", "Arcachon",33120,false,false,Personne::une_dose,Personne::Fotvoir);

    // Marty : est pas contacté et a pas de rendez-vous prévu, et 0 dose.
    Personne *sidonieMarty = new Personne("10106133074829", "MARTY", "Sidonie", "0663389665", "0663389665",65, "allée Montparnasse", "Biganos",33380,false,false,Personne::non_vaccine,Personne::Suretcertin);

    registreVaccin->ajout(*romainDarnis);
    registreVaccin->ajout(*romainHoleczy);
    registreVaccin->ajout(*michelBillaud);
    registreVaccin->ajout(*sidonieMarty);
    registreVaccin->ajout(*brunoMery);
    
    cout << "\n" << endl;
    cout << "Affichage des personnes à contacter pour une première dose : " << endl;
    registreVaccin->afficherPremiereDoseContact();
    cout << "\n\n" << endl;

    cout << "Affichage des personnes à contacter pour une deuxième dose : " << endl;
    registreVaccin->afficherDeuxiemeDoseContact();
    cout << "\n\n" << endl;

    cout << "Affichage des personnes qui ne sont pas contactés : " << endl;
    registreVaccin->afficherNoContact();
    cout << "\n\n" << endl;

    cout << "Affichage des personnes en attente : " << endl;
    registreVaccin->afficherEnAttente();
    cout << "\n\n" << endl;

    registreVaccin->changerPrio(*sidonieMarty);
    registreVaccin->affiche();

 
}
