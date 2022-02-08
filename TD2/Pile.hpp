#define DEF_PILE

#include <string>

class Pile

{

public:
    // CONSTRUCTEURS
    Pile() { 
        donnees = NULL, 
        taille = 0; 
        }

    // DESTRUCTEUR
    inline ~Pile();

    // Ajoute un élément dans la pile. Retourne 1 en cas de succès, 0 sinon (manque de mémoire).

    int empiler(const int &);

    // Retire un élément de la pile. Retourne 1 en cas de succès et la valeur en paramètre, 0 sinon (la pile était vide).
    int depiler(int &);

    // Retire tous les éléments de la pile.
    void empty();

    // Regarde si la pile est vide. Retourne 1 si la pile est vide, 0 sinon (la taille est supérieur à 0).
    int isEmpty(Pile pile);

    // Regarde si la pile est pleine. Retourne 1 si la pile est pleine, 0 sinon (la taille est supérieur au nombre de données).
    int isFull(Pile pile);

    // Retourne le nombre d’éléments de la pile.
    inline int get_size() const
    {
        return taille;
    }

private:
    int *donnees;
    int taille;
};
