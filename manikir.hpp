#ifndef MANIKIR_HPP_INCLUDED
#define MANIKIR_HPP_INCLUDED
#include "usluga.hpp"
class Manikir: public Usluga
{
private:
    string nazivManikirskeUsluge;
public:
    Manikir(int c, string usluga):Usluga(c), nazivManikirskeUsluge(usluga) {}
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

#endif // MANIKIR_HPP_INCLUDED
