#ifndef DEF_POINT
#define DEF_POINT

#include <string>

class Point {

    public :

    void initialise(Point &p,int x,int y,char car);

    void modifier(Point &p);

    void afficher(Point point);

    int distant(Point p);

    private :
    int x,y;
    char name;
};

#endif