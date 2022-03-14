#ifndef POINTMASSE_HPP
#define POINTMASSE_HPP

class PointMasse:public virtual Point,public Masse{
// Il faut utiliser des virtual class pour PointColore et PointMasse pour pouvoir accéder aux coordonnées.

public :
PointMasse();
PointMasse(int _x,int _y);
PointMasse(const PointMasse &pm);
~PointMasse();


void affiche();

};
#endif