#include <iostream>
#include "Personne.hpp"

using namespace std;

int main(int argc, char **argv)
{
 Personne *moi = new Personne("Holeczy", "Romain", 20); // On crée une personne.
  Personne *ami = moi; // On crée un ami avec le constructeur de copie.
  Personne *vide = new Personne(); // On utilise le constructeur par défaut.


  // On affiche tout le monde
  moi->affiche();
  cout << "-----------------------" << endl;
  ami->affiche();
  cout << "-----------------------" << endl;
  vide->affiche();

  delete ami; // On supprime ami.

  // On affiche à nouveau.
  cout << "---------------- DEUXIEME TENTATIVE ----------------" << endl;
  moi->affiche();
  cout << "-----------------------" << endl;
  ami->affiche();
  cout << "-----------------------" << endl;
  vide->affiche();

  return 0;
}


