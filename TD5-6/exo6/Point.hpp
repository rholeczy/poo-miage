#ifndef POINT_HPP
#define POINT_HPP

class Point
{

public:
    Point();
    Point(int _x, int _y);
    Point(const Point &p);
    ~Point();

    virtual void affiche();
    // Les fonctions virtuelles pures vont pouvoir être héritée aux classes filles.

protected:
    int x, y;
};
#endif