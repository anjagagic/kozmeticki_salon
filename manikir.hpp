#ifndef MANIKIR_HPP_INCLUDED
#define MANIKIR_HPP_INCLUDED
#include "usluga.hpp"
class Manikir: public Usluga
{
private:
    string nazivManikirskeUsluge;
public:
    Manikir(int c, string usluga):Usluga(c), nazivManikirskeUsluge(usluga) {}

};

#endif // MANIKIR_HPP_INCLUDED
