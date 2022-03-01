#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

class Vecteur3D{

public :

int abscisse(); //GET our X;
int ordonnee(); //GET pour Y;
int cote(); //GET pour Z;
friend int coincide(Vecteur3D v1,Vecteur3D v2);
/*
Les amis (friends) peuvent être soit des fonctions, 
soit d'autres classes. Une classe offre des droits d'accès privilégiés à ses amis.
Le développeur d'une classe exerce en théorie un contrôle technique et politique aussi bien sur les friends que
sur les fonctions membres de la classe (si ce n'était pas le cas, il lui faudrait obtenir
 une autorisation de ceux qui ont écrits des amis lorsqu'il souhaite modifier sa classe).
 */

void fixer_abscisse(int nouvAbs); //SET pour X
void fixer_ordonnee(int nouvOrd); //SET pour Y
void fixer_cote(int nouvCote); //SET pour Z
void affiche();
void affiche(const char* message);
Vecteur3D() : x(0), y(0), z(0){} // Constructeur en ligne
Vecteur3D(int abs,int ord,int cot) : x(abs),y(ord),z(cot){} // Constructeur par défaut en ligne

private :
double x,y,z;

};
#endif