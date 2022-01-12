#include <iostream>
using namespace std;
void echange1(int,int);
void echange2(int *,int *);
void echange3(int &, int &);

int main(int argc, char** argv){
    int n=10, p=20;
    cout<<"avant appel : "<<n<<" "<<p<<"\n";
    echange3(n,p);
    cout<<"après appel : "<<n<<" "<<p<<"\n";
}

void echange1(int a, int b) {
    int c;
    c=a;a=b;b=c;
}

void echange2(int *a, int *b) {
    int uA = *a;
    int uB = *b;
    int c;
    c=uA;uA=uB;uB=c;
}

void echange3(int &a, int &b) {
    int c;
    c=a;a=b;b=c;
}