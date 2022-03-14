#include <iostream>
using namespace std;

void fct(int=3, int=12); // avec une valeur par défaut
int main(int argc, char** argv){
    int n=10, p=20;
    fct(n,p); // appel 'normal'
    fct(n); // appel avec un seul argument
    fct(); // Sans arguments
}

void fct(int a,int b) //en-tête habituelle 11
{
    cout << "Premier argument : " << a << "\n" << "Second argument : "<< b << endl;
}

