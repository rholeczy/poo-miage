#ifndef REGISTRE_HPP
#define REGISTRE_HPP

class Registre
{

public:
    Registre();
    Registre(std::string _couleur);
    Registre(const Registre &r);
    ~Registre();

protected:
    std::string couleur;
};
#endif