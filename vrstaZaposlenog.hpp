#ifndef VRSTAZAPOSLENOG_HPP_INCLUDED
#define VRSTAZAPOSLENOG_HPP_INCLUDED
#include "termin.hpp"
#include "korisnik.hpp"
enum VrstaZaposlenog {FRIZER, MANIKER, PEDIKER, KOZMETICAR, MASER};
class Zaposleni: public Korisnik
{
private:
    int id;
    VrstaZaposlenog zanimanje;
    Termin termini[50];
public:
    Zaposleni()
    {
        id=0;
        zanimanje=FRIZER;
    }

    Zaposleni(int ID, VrstaZaposlenog z)
    {
        id=ID;
        zanimanje=z;
    }

};

#endif // VRSTAZAPOSLENOG_HPP_INCLUDED
