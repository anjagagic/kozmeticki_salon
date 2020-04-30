#ifndef SMINKA_HPP_INCLUDED
#define SMINKA_HPP_INCLUDED
#include "usluga.hpp"
class Sminka: public Usluga
{
private:
    string nazivSminkerskeUsluge;
public:
    Sminka(int c, string usluga):Usluga(c), nazivSminkerskeUsluge(usluga) {}
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

#endif // SMINKA_HPP_INCLUDED
