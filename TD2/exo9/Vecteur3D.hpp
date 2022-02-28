#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

class Vecteur3D{

public :

void affiche();
void afficher(const char* message);
Vecteur3D();
Vecteur3D(int abs,int obs,int cot);

private :
double x,y,z;

};
#endif