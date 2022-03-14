#ifndef POINTCOLORE_HPP
#define POINTCOLORE_HPP

class PointColore:public Point{

public :
PointColore();
PointColore(int _x,int _y);
PointColore(const Point &pc);
~PointColore();

void setColor(std::string _couleur);
protected :
std::string couleur;
};
#endif