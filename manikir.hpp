#ifndef MANIKIR_HPP_INCLUDED
#define MANIKIR_HPP_INCLUDED
#include "usluga.hpp"
class Manikir: public Usluga
{
private:
    string nazivManikirskeUsluge;
public:
    Manikir():Usluga(0), nazivManikirskeUsluge("feniranje"){}
    Manikir(int c, string usluga):Usluga(c), nazivManikirskeUsluge(usluga) {}
    int getCena()const{return cena;}
    string getNazivUsluge()const{return nazivManikirskeUsluge;}
    friend ostream& operator<<(ostream out, const Manikir& m);

};

#endif // MANIKIR_HPP_INCLUDED
