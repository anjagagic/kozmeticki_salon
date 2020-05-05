#ifndef VRSTAZAPOSLENOG_HPP_INCLUDED
#define VRSTAZAPOSLENOG_HPP_INCLUDED
#include "termin.hpp"
#include "korisnik.hpp"

/*ostream& operator<<(ostream& out, const Termin& t){
        out<<t.getDatum()<<endl;
        out<<t.getBroj()<<endl;
        out<<t.getID()<<endl;
        out<<t.getVreme()<<endl;
        out<<t.getZauzet()<<endl;
        return out;
}*/

enum VrstaZaposlenog {SMINKER, MANIKER, PEDIKER, TREPAVICE, MASER};
class Zaposleni: public Korisnik
{
private:
    int id;
    VrstaZaposlenog zanimanje;
    Termin termini[50];
    int duzinaNiza;
public:
    Zaposleni()
    {
        id=0;
        zanimanje=SMINKER;
    }

    Zaposleni(string i, string p, string u, string s, int ID, VrstaZaposlenog z, int d):Korisnik(u, s, i, p), id(ID), zanimanje(z), duzinaNiza(d){}
    friend ostream& operator<<(ostream& out, const Termin& t);

    void dodajTermin(Termin t){
        if(duzinaNiza<50){
            termini[duzinaNiza+1]=t;
            duzinaNiza++;
        }
    }
    /*void pregledTermina(){
        for(int i=0; i<50; i++){
            cout<<termini[i];
        }
    }*/
    /*void login(){
        Korisnik::login();
        cout<<"odaberite vrstu zaposlenog: "<<endl;
        cout<<"1. sminker"<<endl;
        cout<<"2. maniker"<<endl;
        cout<<"3. pediker"<<endl;
        cout<<"4. trepavice"<<endl;
        cout<<"5. maser"<<endl;
        int vrsta;
        cin<<vrsta;
        switch(vrsta){
            case 1, 2, 3, 4, 5: uloguj se u taj odredjen profil
        }
        cout<<"uspesno logovanje"<<endl;
        //ili neuspesno
    }*/



};

#endif // VRSTAZAPOSLENOG_HPP_INCLUDED
