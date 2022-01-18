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

    void afficherDefault();

    void afficherCopie();

    void afficherParam();

    void afficherDestruc();

    private :
    int x,y;
    std::string name;

    static int nb_default;
    static int nb_copie;
    static int nb_param;
    static int nd_destruc;

};

#endif