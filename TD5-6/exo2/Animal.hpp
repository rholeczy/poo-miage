#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{

public:
    Animal();
    Animal(int lage, std::string lenomducri);
    Animal(const Animal &a);
    ~Animal();

    void vieillir();
    void presenter();

protected:
    int age;
    std::string nomducri;
};
#endif