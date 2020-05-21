#ifndef TREPAVICE_HPP_INCLUDED
#define TREPAVICE_HPP_INCLUDED
#include "usluga.hpp"
class Trepavice: public Usluga
{
private:
    string nazivUsluge;
public:
    Trepavice():Usluga(0){}
    Trepavice(int c, string usluga):Usluga(c), nazivUsluge(usluga) {}
    void ispis(){
        cout<<"5.Trepavice"<<endl;
    }
    void unesiUslugu(string usluga){
        nazivUsluge=usluga;
    }
};

#endif // TREPAVICE_HPP_INCLUDED
