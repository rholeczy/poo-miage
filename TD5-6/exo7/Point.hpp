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

protected:
    int x, y;
};
#endif