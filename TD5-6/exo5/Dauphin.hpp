#ifndef DAUPHIN_HPP
#define DAUPHIN_HPP

class Dauphin : public Poisson, public Mammifere
{

public:
    Dauphin();
    Dauphin(int _age, std::string _cri);
    Dauphin(const Dauphin &d);
    ~Dauphin();

    void presenter();
    void setVitesse(double _vitesse);
    void setProfondeur(double _profondeur);

protected:
    std::string cri;
};
#endif