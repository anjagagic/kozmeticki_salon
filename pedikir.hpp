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
    void unesiUslugu(string usluga){
        nazivPedikirskeUsluge=usluga;
    }
    void ispis(){
        cout<<"3.Pedikir"<<endl;
    }

};

#endif // PEDIKIR_HPP_INCLUDED
