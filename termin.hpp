#ifndef TERMIN_HPP_INCLUDED
#define TERMIN_HPP_INCLUDED

#include <fstream>

#include "vreme.hpp"
#include "datum.hpp"

void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}


class Termin
{
private:
    int broj;
    Vreme vreme;
    Datum datum;
    bool zauzet;
    int idZaposlenog;
public:
    Vreme getVreme() const {return vreme;}
    Datum getDatum() const {return datum;}
    int getID()const{return idZaposlenog;}
    int getBroj(){
        return broj;
    }
    Termin():vreme(0, 0), datum(1, 1, 1), zauzet(0), idZaposlenog(0){}
    Termin(int dan, int mesec, int godina, int sat, int minut, bool z, int id, int b):vreme(sat, minut), datum(dan, mesec, godina), zauzet(z), idZaposlenog(id), broj(b) {}
    //friend ostream& operator<<(ostream& out, const Termin& t);

    void citajFajl(string nazivFajla){
    cout<<"U fajlu pise: "<<endl;
    citajTxt(nazivFajla);
    cout<<endl<<endl;
    }

};

#endif // TERMIN_HPP_INCLUDED
