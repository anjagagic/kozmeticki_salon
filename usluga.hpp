#ifndef USLUGA_HPP_INCLUDED
#define USLUGA_HPP_INCLUDED
#include "vrstaZaposlenog.hpp"
class Usluga
{
protected:
    Zaposleni zaposleni[10];
    int cena;
public:
    Usluga(int c)
    {
        cena=c;
    }
    //ucitaj zaposlene iz fajla
};

#endif // USLUGA_HPP_INCLUDED
