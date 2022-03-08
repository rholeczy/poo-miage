#include <iostream>
#include "Animal.hpp"
#include "Chien.hpp"

using namespace std;

int main(int argc, char **argv)
{
    //Exercice 4
    Animal *c;                 // Animal crée
    c = new Chien(4, "rrrrh"); // Chien crée
    delete c;                  // Animal mort

    // Si on ajoute le virtual :
    // Animal crée
    // Chien crée
    // Chien mort
    // Animal mort

    /* 
    Une fonction virtuelle est une fonction membre déclarée dans une classe de base et redéfinie par une classe dérivée. Lorsque vous vous référez à un objet de classe dérivée à l’aide d’un pointeur 
    ou d’une référence à la classe de base, vous pouvez appeler une fonction virtuelle pour cet objet et exécuter la version de la classe dérivée de la fonction.

    Les fonctions virtuelles garantissent que la fonction correcte est appelée pour un objet, quel que soit le type de référence (ou pointeur) utilisé pour l’appel de fonction.
    Ils sont principalement utilisés pour réaliser le polymorphisme dynamique.
    Les fonctions sont déclarées avec le mot clé virtual dans la classe de base.
    */
}
