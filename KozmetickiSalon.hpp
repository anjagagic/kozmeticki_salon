#ifndef KOZMETICKISALON_HPP_INCLUDED
#define KOZMETICKISALON_HPP_INCLUDED
#include "usluga.hpp"
#include "vrstaZaposlenog.hpp"
class KozmetickiSalon
{
private:
    string nazivSalona;
    Usluga usluge[5];
    Zaposleni zaposleni[100];
public:
    KozmetickiSalon()
    {
        nazivSalona="naziv";
    }
    void unesiUsluge(){

    }
};


#endif // KOZMETICKISALON_HPP_INCLUDED
