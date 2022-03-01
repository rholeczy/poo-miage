#include <iostream>
using namespace std; 
#include "Pile.hpp" 

pileEntiers::pileEntiers(){ 
    taille=20; 
    sommet=-1; 
    donnes=new int [TD]; 
}

pileEntiers::pileEntiers(int n){
    donnes=new int[n];
    taille=n; sommet=-1; 
}

pileEntiers::pileEntiers(const pileEntiers & pile){ 
    sommet=pile.sommet;
    taille=pile.taille;
    donnes=new int[taille];
    for (int i=0;i<pile.taille;i++){
        donnes[i]=pile.donnes[i];
    } 
}

pileEntiers::~pileEntiers(){
     cout<<"destruction"<<endl;
     delete[]donnes;
     taille=0;
     sommet=-1;
} 

void pileEntiers::empiler(int p){
    sommet++;
    donnes[sommet]=p;
} 

int pileEntiers::depile(){
    int res;
    res = donnes[sommet];
    sommet--;
    return res;
}

int pileEntiers::pleine(){ 
    int res; 
    if(sommet==(taille-1)){ 
        res = 1;
    } else {
        res = 0;
    }
    return res;
}

int pileEntiers::vide(){ 
    if(sommet==-1){
        return 1;
    } 
    return 0;
} 

void pileEntiers::afficher(){
    for(int i=0;i<=sommet;i++){ 
        cout<<donnes[i]<<"|";
        } 
        cout<<endl;
}