#ifndef PEDIKIR_HPP_INCLUDED
#define PEDIKIR_HPP_INCLUDED
#include "usluga.hpp"
class Pedikir: public Usluga
{
private:
    string nazivPedikirskeUsluge;
public:
    Pedikir(int c, string usluga):Usluga(c), nazivPedikirskeUsluge(usluga) {}
    void dodajTermin(Termin t, Termin ter[]){
        for(i=0; i<50; i++){
            ter[i]=t;
        }
    }
     void dodajZaposlene(Zaposleni z, Zaposleni niz[]){
        for(i=0; i<50; i++){
            niz[i]=z;
        }
    }
};

#endif // PEDIKIR_HPP_INCLUDED
