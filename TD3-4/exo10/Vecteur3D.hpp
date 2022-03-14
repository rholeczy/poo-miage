#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

class Vecteur3D
{

public:
    int abscisse(); //GET our X;
    int ordonnee(); //GET pour Y;
    int cote();     //GET pour Z;
    bool coincide(Vecteur3D v);
    void fixer_abscisse(int nouvAbs); //SET pour X
    void fixer_ordonnee(int nouvOrd); //SET pour Y
    void fixer_cote(int nouvCote);    //SET pour Z
    void affiche();
    void affiche(const char *message);
    Vecteur3D() : x(0), y(0), z(0) {}                                         // Constructeur par défaut en ligne
    Vecteur3D(double abs, double ord, double cot) : x(abs), y(ord), z(cot) {} // Constructeur en ligne

private:
    double x, y, z;
};
#endif