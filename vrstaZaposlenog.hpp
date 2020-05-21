#ifndef VRSTAZAPOSLENOG_HPP_INCLUDED
#define VRSTAZAPOSLENOG_HPP_INCLUDED
#include <iostream>
#include "termin.hpp"
#include "korisnik.hpp"

ostream& operator<<(ostream& out, const Datum& d){
    out<<d.getDan()<<"."<<d.getMesec()<<"."<<d.getGodina()<<"."<<endl;
    return out;
}

ostream& operator<<(ostream& out, const Vreme& v){
    out<<v.getSat();
    out<<":";
    out<<v.getMinut();
    return out;
}

ostream& operator<<(ostream& out, const Termin& t){
        out<<"TERMIN"<<endl;
        out<<"--------------"<<endl;
        out<<"Datum:"<<t.getDatum()<<endl;
        out<<"Vreme:"<<t.getVreme()<<endl;
        out<<"ID zaposlenog:"<<t.getID()<<endl;
        if(t.getZauzet()==1){
        out<<"Termin zauzet"<<endl;}
        else{
        out<<"Termin nije zauzet"<<endl;}
        out<<endl;
        return out;
}
enum VrstaZaposlenog {SMINKER, MANIKER, PEDIKER, TREPAVICE, MASER};
class Zaposleni: public Korisnik
{
private:
    int id;
    VrstaZaposlenog zanimanje;
    vector<Termin> termini;
public:
    void setUsername(string un){username=un;}
    void setSifra(string sf){sifra=sf;}
    Zaposleni():Korisnik("username", "sifra", "ime", "prezime"){id=1; zanimanje=SMINKER;}
    Zaposleni(string i, string p, string u, string s, int ID, VrstaZaposlenog z):Korisnik(u, s, i, p), id(ID), zanimanje(z){}
    friend ostream& operator<<(ostream& out, const Termin& t);
    friend ostream& operator<<(ostream& out, const Zaposleni& z);
    void dodajTermin(const Termin& t){
        termini.push_back(t);
        }
    bool izbaciTermin(const Termin& t){
        for(auto it=termini.begin(); it<termini.end(); it++){
            if(t.getZauzet()==true){
                cout<<"Vas termin "<<t.getDatum()<<" u "<<t.getVreme()<<" je zauzet"<<endl;
                termini.erase(it);
                cout<<"TERMIN IZBRISAN"<<endl;
                return true;
            }
        }
        return false;
    }
    void pregledTermina(){
        cout<<endl;
        cout<<"TERMINI PREGLED:"<<endl;
        cout<<endl;
        for(auto it=termini.begin(); it<termini.end(); it++){
            cout<<*it<<endl;
        }
    }
    bool pretragaTermina(const Termin& t){
        for(auto it=termini.begin(); it<termini.end(); it++){
        if(t.getDatum().uporediDatum(it->getDatum())==true && t.getVreme().uporediVreme(it->getVreme())==true){
            return true;
        }
        return false;
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
