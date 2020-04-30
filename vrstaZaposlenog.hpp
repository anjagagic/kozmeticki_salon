#ifndef VRSTAZAPOSLENOG_HPP_INCLUDED
#define VRSTAZAPOSLENOG_HPP_INCLUDED
#include "termin.hpp"
#include "korisnik.hpp"
enum VrstaZaposlenog {SMINKER, MANIKER, PEDIKER, TREPAVICE, MASER};
class Zaposleni: public Korisnik
{
private:
    int id;
    VrstaZaposlenog zanimanje;
    Termin termini[50];
public:
    Zaposleni()
    {
        id=0;
        zanimanje=SMINKER;
    }

    Zaposleni(string i, string p, string u, string s, int ID, VrstaZaposlenog z):Korisnik(u, s, i, p), id(ID), zanimanje(z){}

    void pregledTermina(){
        for(int i=0; i<50; i++){
            cout<<termini[i];
        }
    }
    void login(){
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
    }
    //registracija i sacuvaj u dati fajl
};

#endif // VRSTAZAPOSLENOG_HPP_INCLUDED
