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
    static int BrOj;
    Vreme vreme;
    Datum datum;
    bool zauzet;
    int idZaposlenog;
public:
    Vreme getVreme() const {return vreme;}
    Datum getDatum() const {return datum;}
    int getID()const{return idZaposlenog;}
    bool getZauzet()const{return zauzet;}
    int getBroj()const{return broj;}
    int getBrOj()const{return BrOj;}

    Termin():vreme(0, 0), datum(1, 1, 1), zauzet(0), idZaposlenog(0) {BrOj++;}
    Termin(const Termin& t){broj=t.broj; BrOj=t.BrOj; vreme=t.vreme; datum=t.datum; zauzet=t.zauzet; idZaposlenog=t.idZaposlenog;}
    Termin(int dan, int mesec, int godina, int sat, int minut, bool z, int id):vreme(sat, minut), datum(dan, mesec, godina), zauzet(z), idZaposlenog(id){BrOj++;}
    //friend ostream& operator<<(ostream& out, const Termin& t);
    ~Termin(){
        BrOj--;
    }
    void citajFajl(string nazivFajla){
    cout<<"U fajlu pise: "<<endl;
    citajTxt(nazivFajla);
    cout<<endl<<endl;
    }
    /*void napraviTermin(Datum d, Vreme v, ){

    }*/
};
int Termin::BrOj=0;
#endif // TERMIN_HPP_INCLUDED
