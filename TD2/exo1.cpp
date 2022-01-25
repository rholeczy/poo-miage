#include <iostream>
#include "Personne.hpp"

#include "string"

using namespace std;


// Constructeur
Personne::Personne(char nom[20],char prenom[20],int age)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
}





void Personne::affiche()
{
cout << "Test" << endl;
}

int main(int argc, char **argv)
{
  const int size=20 ;
  Personne personne[size] ;
 
  return 0;
}