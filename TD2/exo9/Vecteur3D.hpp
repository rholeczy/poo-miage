#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

class Vecteur3D{

public :

void affiche();
void affiche(const char* message);
Vecteur3D() : x(0), y(0), z(0){} // Constructeur en ligne
Vecteur3D(int abs,int ord,int cot) : x(abs),y(ord),z(cot){} // Constructeur par défaut en ligne

private :
double x,y,z;

};
#endif