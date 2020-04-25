#ifndef TERMIN_HPP_INCLUDED
#define TERMIN_HPP_INCLUDED
#include "vreme.hpp"
#include "datum.hpp"

class Termin
{
private:
    Vreme vreme;
    Datum datum;
    bool zauzet;
    int idZaposlenog;
public:
    Termin():vreme(0, 0), datum(1, 1, 1), zauzet(0), idZaposlenog(0){}
    Termin(int dan, int mesec, int godina, int sat, int minut, bool z, int id):vreme(sat, minut), datum(dan, mesec, godina), zauzet(z), idZaposlenog(id) {}
};

#endif // TERMIN_HPP_INCLUDED
