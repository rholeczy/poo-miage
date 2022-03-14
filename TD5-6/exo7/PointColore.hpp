#ifndef POINTCOLORE_HPP
#define POINTCOLORE_HPP

class PointColore : public virtual Point, public Couleur
{
    // Il faut utiliser des virtual class pour PointColore et PointMasse pour pouvoir accéder aux coordonnées.

public:
    PointColore();
    PointColore(int _x, int _y);
    PointColore(const PointColore &pc);
    ~PointColore();

    void affiche();
};
#endif