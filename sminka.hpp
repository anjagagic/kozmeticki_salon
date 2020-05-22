#ifndef SMINKA_HPP_INCLUDED
#define SMINKA_HPP_INCLUDED
#include "usluga.hpp"
class Sminka: public Usluga
{
private:
    string nazivSminkerskeUsluge;
public:
    Sminka():Usluga(0), nazivSminkerskeUsluge("naziv") {}
    Sminka(int c, string usluga):Usluga(c), nazivSminkerskeUsluge(usluga) {}
    void unesiUslugu(string usluga)
    {
        nazivSminkerskeUsluge=usluga;
    }
    void ispis()
    {
        cout<<"1.Sminka"<<endl;
    }
    string getUsluga()
    {
        return nazivSminkerskeUsluge;
    }
    void setUsluga(string usluga)
    {
        nazivSminkerskeUsluge=usluga;
    }
};

#endif // SMINKA_HPP_INCLUDED
