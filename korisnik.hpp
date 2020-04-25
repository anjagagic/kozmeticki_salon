#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED

class Korisnik
{
protected:
    string username, sifra;
    string ime, prezime;
public:
    Korisnik(){
        username="";
        sifra="";
        ime="";
        prezime="";
    }
    Korisnik(string u, string s, string i, string p)
    {
        username=u;
        sifra=s;
        ime=i;
        prezime=p;
    }

};


#endif // KORISNIK_HPP_INCLUDED
