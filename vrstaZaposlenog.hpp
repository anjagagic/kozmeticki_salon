#ifndef VRSTAZAPOSLENOG_HPP_INCLUDED
#define VRSTAZAPOSLENOG_HPP_INCLUDED
#include <iostream>
#include "termin.hpp"
#include "korisnik.hpp"

ostream& operator<<(ostream& izlaz1, const Datum& d){
    izlaz1<<d.getDan()<<"."<<d.getMesec()<<"."<<d.getGodina()<<"."<<endl;
    return izlaz1;
}

ostream& operator<<(ostream& izlaz2, const Vreme& v){
    izlaz2<<v.getSat()<<":"<<v.getMinut()<<endl;
    return izlaz2;
}

ostream& operator<<(ostream& out, const Termin& t){
        out<<"TERMIN - ISPIS"<<endl;
        out<<"--------------"<<endl;
        out<<"Datum:"<<t.getDatum()<<endl;
        out<<"Vreme:"<<t.getVreme()<<endl;
        out<<"ID zaposlenog:"<<t.getID()<<endl;
        if(t.getZauzet()==1){
        out<<"Termin zauzet"<<endl;}
        out<<"Termin nije zauzet"<<endl;
        out<<"Broj:"<<t.getBroj()<<endl;
        out<<endl;
        return out;
}
enum VrstaZaposlenog {SMINKER, MANIKER, PEDIKER, TREPAVICE, MASER};
class Zaposleni: public Korisnik
{
private:
    int id;
    VrstaZaposlenog zanimanje;
    int duzinaNiza;
    vector<Termin> termini;
public:
    Zaposleni()
    {
        id=0;
        zanimanje=SMINKER;
    }

    Zaposleni(string i, string p, string u, string s, int ID, VrstaZaposlenog z, int d):Korisnik(u, s, i, p), id(ID), zanimanje(z), duzinaNiza(d){}
    friend ostream& operator<<(ostream& out, const Termin& t);

    void dodajTermin(const Termin& t){
        termini.push_back(t);
        }
    void pregledTermina(){
        for(int i=0; i<50; i++){
            cout<<termini[i];
        }
    }
    int getID()const{return id;}
    VrstaZaposlenog getZaposleni()const{return zanimanje;}


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
