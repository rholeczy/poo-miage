#include <iostream>
#include "Point.hpp"
#include "PointColore.hpp"

using namespace std;

int main(int argc, char **argv)
{
    PointColore *p = new PointColore(22,5); // PointColore crée
    p->setColor("rouge");
    
}
