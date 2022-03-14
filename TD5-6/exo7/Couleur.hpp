#ifndef COULEUR_HPP
#define COULEUR_HPP

class Couleur{

public :
Couleur();
Couleur(std::string _couleur);
Couleur(const Couleur &c);
~Couleur();

void setColor(std::string _couleur);
void affiche();

protected :
std::string couleur;
};
#endif