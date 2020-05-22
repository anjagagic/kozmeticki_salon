#ifndef PEDIKIR_HPP_INCLUDED
#define PEDIKIR_HPP_INCLUDED
#include "usluga.hpp"
class Pedikir: public Usluga
{
private:
    string nazivPedikirskeUsluge;
public:
    Pedikir():Usluga(0){}
    Pedikir(int c, string usluga):Usluga(c), nazivPedikirskeUsluge(usluga) {}
    void ispis(){
        cout<<"3.Pedikir"<<endl;
    }
    void setUsluga(string u){nazivPedikirskeUsluge=u;}

};

#endif // PEDIKIR_HPP_INCLUDED
