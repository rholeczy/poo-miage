#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include <string>


class Personne{

public :

Personne(string,string prenom,int age);
Personne();
~Personne();

void affiche();

private :
static int age;
static char nom[20];
static char prenom[20];


};
#endif