#ifndef MASAZA_HPP_INCLUDED
#define MASAZA_HPP_INCLUDED
#include "usluga.hpp"
class Masaza: public Usluga
{
private:
    bool terapeutska;
public:
    Masaza(int c, bool t):Usluga(c), terapeutska(t) {}
};

#endif // MASAZA_HPP_INCLUDED
