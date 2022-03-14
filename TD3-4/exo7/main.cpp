#include <iostream>

#define copie1(source, dest) source = dest;

inline void copie2(int source, int dest) { source = dest; } // Récursivité disponible

// La différence clé entre #DEFINE et une inline function est que #define est vérifiée par le préprocesseur tandis qu'une fonction en ligne est vérifiée par le compilateur.

using namespace std;

int main(int argc, char **argv)
{

    double sourc = 3;
    double desti = 5;
    copie1(sourc, desti);
    cout << "Afficher define : " << sourc << endl;
    sourc = 3;
    desti = 5;
    copie2(sourc, desti);
    cout << "Afficher inline : " << sourc << endl;
}