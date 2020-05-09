#ifndef MASAZA_HPP_INCLUDED
#define MASAZA_HPP_INCLUDED
#include "usluga.hpp"
class Masaza: public Usluga
{
private:
    bool terapeutska;
public:
    Masaza():Usluga(0), terapeutska(true){}
    Masaza(int c, bool t):Usluga(c), terapeutska(t) {}
    int getCena()const{return cena;}
    bool getT()const{return terapeutska;}
};

#endif // MASAZA_HPP_INCLUDED
