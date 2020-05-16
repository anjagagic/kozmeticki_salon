#ifndef USLUGA_HPP_INCLUDED
#define USLUGA_HPP_INCLUDED
#include "vrstaZaposlenog.hpp"
class Usluga
{
protected:
    vector <Zaposleni> zaposleni;
    int cena;
public:
    Usluga(){
    cena=0;}
    Usluga(int c){cena=c;}
    virtual void ispis()=0;
};

#endif // USLUGA_HPP_INCLUDED
