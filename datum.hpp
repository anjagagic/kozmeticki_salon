#ifndef DATUM_HPP_INCLUDED
#define DATUM_HPP_INCLUDED

class Datum
{
private:
    int dan;
    int mesec;
    int godina;
public:
    Datum(){
        dan=1;
        mesec=1;
        godina=1;
    }
    Datum(int d, int m, int g)
    {
        dan=d;
        mesec=m;
        godina=g;
    }
    int getDan()const {return dan;}
    int getMesec()const {return mesec;}
    int getGodina()const {return godina;}
};

#endif // DATUM_HPP_INCLUDED
