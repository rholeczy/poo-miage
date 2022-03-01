#ifndef exo3
#define exo3

#include <iostream>
#define TD 20
using namespace std; 
class pileEntiers{
    private:
        int taille;
        int sommet;
        int * donnes;
    public:
        pileEntiers(int n);
        pileEntiers();
        pileEntiers(const pileEntiers &pile);
        ~pileEntiers();
        void empiler (int p);
        int depile ();
        int pleine ();
        int vide ();
        void afficher();
};
#endif