#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include <string>


class Personne{

public :

Personne(char const *name,char const *surname,int lage);
Personne();
Personne(const Personne &p);
~Personne();

void affiche();

private :
 int age;
 char nom[20];
 char prenom[20];
};
#endif