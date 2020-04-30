#ifndef TREPAVICE_HPP_INCLUDED
#define TREPAVICE_HPP_INCLUDED
#include "usluga.hpp"
class Trepavice: public Usluga
{
private:
    string nazivUsluge;
public:
    Trepavice(int c, string usluga):Usluga(c), nazivUsluge(usluga) {}
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

#endif // TREPAVICE_HPP_INCLUDED
