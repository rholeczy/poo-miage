#ifndef REGISTRE_HPP
#define REGISTRE_HPP

class Registre
{

public:
    Registre();
    Registre(const Registre &r);
    ~Registre();

    void affiche();

private:
    std::map<std::string, Personne> leRegistre;
};
#endif