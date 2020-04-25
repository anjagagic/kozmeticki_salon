#ifndef TREPAVICE_HPP_INCLUDED
#define TREPAVICE_HPP_INCLUDED
#include "usluga.hpp"
class Trepavice: public Usluga
{
private:
    string nazivUsluge;
public:
    Trepavice(int c, string usluga):Usluga(c), nazivUsluge(usluga) {}
};

#endif // TREPAVICE_HPP_INCLUDED
