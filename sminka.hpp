#ifndef SMINKA_HPP_INCLUDED
#define SMINKA_HPP_INCLUDED
#include "usluga.hpp"
class Sminka: public Usluga
{
private:
    string nazivSminkerskeUsluge;
public:
    Sminka(int c, string usluga):Usluga(c), nazivSminkerskeUsluge(usluga) {}
};

#endif // SMINKA_HPP_INCLUDED
