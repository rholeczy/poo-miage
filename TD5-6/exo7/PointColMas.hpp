#ifndef POINTCOLMAS_HPP
#define POINTCOLMAS_HPP

class PointColMas:public PointMasse,public PointColore{

public :
PointColMas();
PointColMas(int _x,int _y);
PointColMas(const PointColMas &pcm);
~PointColMas();

void affiche();

};
#endif