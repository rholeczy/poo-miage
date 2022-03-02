#include <iostream>

#define copie1(source,dest) source=dest ;

inline void copie2(int source, int dest) { dest = source; } // Récursivité disponible

// La différence clé entre #DEFINE et une inline function est que #define est vérifiée par le préprocesseur tandis qu'une fonction en ligne est vérifiée par le compilateur.

using namespace std;

int main(int argc, char **argv){

double sourc = 3.0;
double desti = 5.0;

copie1(sourc,desti);
cout << "Afficher define : " << desti << endl;
copie2(sourc,desti);
cout << "Afficher inline : " << desti << endl;

}