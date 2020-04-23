#ifndef VRSTAZAPOSLENOG_HPP_INCLUDED
#define VRSTAZAPOSLENOG_HPP_INCLUDED
#include "termin.hpp"
enum VrstaZaposlenog {FRIZER, MANIKER, PEDIKER, KOZMETICAR, MASER};
class Zaposleni: public Korisnik{
private:
    int id;
    VrstaZaposlenog zanimanje;
    Termin termini[50];
};

#endif // VRSTAZAPOSLENOG_HPP_INCLUDED
