#include <iostream>
#include "Pile.hpp"

using namespace std;


int main(){ 
    pileEntiers p;
    if(!p.pleine()) p.empiler(1); 
    if(!p.pleine()) p.empiler(2); 
    if(!p.pleine()) p.empiler(3); 
    p.afficher(); 
    int x=p.vide(); 
    int y=p.pleine();
    cout<<"Test vide:"<<x<<endl;
    cout<<"Test pleine:"<<y<<endl; 
    /* if(!p.vide()) p.depile(); 
    p.afficher(); 
    pileEntiers p1(p); 
    p1.afficher();*/ 
}