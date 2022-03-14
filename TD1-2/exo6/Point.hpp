#ifndef DEF_POINT
#define DEF_POINT

class Point
{

public:
    void initialise(int x, int y, char car);

    void modifier(Point &p);

    void afficher();

    int distant();

private:
    int x, y;
    char name;
};

#endif