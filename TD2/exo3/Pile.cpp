#include <iostream>
#include "Pile.hpp"

using namespace std;

// Destructeur
Pile::~Pile()
{
    empty();
}

void Pile::empty()
{
    if (taille > 0){
        delete[] donnees;
        taille = 0;
    }
}

int Pile::isEmpty(Pile pile)
{
    if (taille > 0){
        return 1;
    }else{
        return 0;
    }
}

int Pile::isFull(Pile pile)
{
    int tmp = 0;
    for (int i = 0; i < taille; i++){
        if (donnees[i] != NULL){
            tmp++;
        }
    }
    if (taille == tmp){
        return 1;
    }else{
        return 0;
    }
}

int Pile::empiler(const int &element)
{
    int *temp = new int[taille + 1];
    if (temp == NULL)
    {
        return 0;
    }
    for (int i = 0; i < taille; i++)
    {
        temp[i] = donnees[i];
    }
    temp[taille] = element;
    if (taille > 0)
    {
        delete[] donnees;
        donnees = temp;
        taille++;
        return 1;
    }
}

int Pile::depiler(int &resultat)
{
    if (taille == 0){
        return 0;
    }
    int *temp = new int[taille - 1];
    if (temp == NULL){
        return 0;
    }
    resultat = donnees[--taille];
    for (int i = 0; i < taille; i++){
        temp[i] = donnees[i];
    }
    delete[] donnees;
    donnees = temp;
    return 1;
}

int main(int argc, char **argv)
{
}