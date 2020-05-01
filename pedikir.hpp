#ifndef PEDIKIR_HPP_INCLUDED
#define PEDIKIR_HPP_INCLUDED
#include "usluga.hpp"
class Pedikir: public Usluga
{
private:
    string nazivPedikirskeUsluge;
public:
    Pedikir(int c, string usluga):Usluga(c), nazivPedikirskeUsluge(usluga) {}
};

#endif // PEDIKIR_HPP_INCLUDED
