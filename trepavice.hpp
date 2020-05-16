#ifndef TREPAVICE_HPP_INCLUDED
#define TREPAVICE_HPP_INCLUDED
#include "usluga.hpp"
class Trepavice: public Usluga
{
private:
    string nazivUsluge;
public:
    Trepavice(int c, string usluga):Usluga(c), nazivUsluge(usluga) {}
    void ispis(){
        cout<<"Trepavice, "<<nazivUsluge<<", "<<cena<<endl;
    }
};

#endif // TREPAVICE_HPP_INCLUDED
