#ifndef DEF_PERSONNE
#define DEF_PERSONNE

class Personne{

public :

Personne(char const *name,char const *surname,int lage);
Personne();
Personne(const Personne &p);
~Personne();

void affiche() const;

private :
 int age;
 char *nom = new char[20];
 char *prenom = new char[20];


};
#endif