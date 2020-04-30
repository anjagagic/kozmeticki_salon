#ifndef MASAZA_HPP_INCLUDED
#define MASAZA_HPP_INCLUDED
#include "usluga.hpp"
class Masaza: public Usluga
{
private:
    bool terapeutska;
public:
    Masaza(int c, bool t):Usluga(c), terapeutska(t) {}
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

#endif // MASAZA_HPP_INCLUDED
