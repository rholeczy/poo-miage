#include <iostream>

#define copie1(source, dest) source = dest;

inline void copie2(int source, int dest) { source = dest; } // Récursivité disponible

// La différence clé entre #DEFINE et une inline function est que #define est vérifiée par le préprocesseur tandis qu'une fonction en ligne est vérifiée par le compilateur.

using namespace std;

int main(int argc, char **argv){

double a = 3.0;
double b = 5.0;
copie1(a,b);
copie2(a,b);

cout << "Afficher define : " << a << endl;
cout << "Afficher inline : " << a << endl;

}