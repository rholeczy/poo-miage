#ifndef DEF_POINT
#define DEF_POINT

#include <string>

class Point {

    public :

    Point(int x,int y,std::string car);

    Point(const Point &p);

    ~Point();

    void modifier(Point &p);

    void afficher(Point point);

    int distant(Point p);

    private :
    int x,y;
    std::string name;
};

#endif