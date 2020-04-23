#ifndef TERMIN_HPP_INCLUDED
#define TERMIN_HPP_INCLUDED
#include "vreme.hpp"
#include "datum.hpp"
class Termin{
private:
    Vreme vreme;
    Datum datum;
    bool zauzet;
    int idZaposlenog;
};

#endif // TERMIN_HPP_INCLUDED
