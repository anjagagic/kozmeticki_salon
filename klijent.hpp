#ifndef KLIJENT_HPP_INCLUDED
#define KLIJENT_HPP_INCLUDED

#include "vrstaZaposlenog.hpp"
#include "termin.hpp"
ostream& operator<<(ostream& out, const Korisnik& k){
        out<<"KORISNIK - ISPIS"<<endl;
        out<<"----------------"<<endl;
        out<<"Username:"<<k.getUsername()<<endl;
        out<<"Sifra:"<<k.getSifra()<<endl;
        out<<"Ime:"<<k.getIme()<<endl;
        out<<"Prezime:"<<k.getPrezime()<<endl;
        out<<endl;
        return out;
}

class Klijent: public Korisnik
{
private:
    vector<Termin> termini;
public:
    void zakaziTermin(){
        int unos;
        cout<<"Odaberite uslugu"<<endl;
        cout<<"1. Sminka"<<endl;
        cout<<"2. Manikir"<<endl;
        cout<<"3. Pedikir"<<endl;
        cout<<"4. Masaza"<<endl;
        cout<<"5. Trepavice"<<endl;
        cin>>unos;
        if (unos==1){
            Zaposleni z1("ime", "prezime", "username", "sifra", 1, SMINKER, 0);
            Termin t(30, 4, 2020, 15, 30, false, 3);
            termini.push_back(t);
            z1.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==2){
            Zaposleni z2("ime2", "prezime2", "username2", "sifra2", 2, MANIKER, 0);
            Termin t(1, 4, 2020, 15, 30, false, 3);
            termini.push_back(t);
            z2.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==3){
            Zaposleni z3("ime3", "prezime3", "username3", "sifra3", 3, PEDIKER, 0);
            Termin t(5, 4, 2020, 15, 30, false, 3);
            termini.push_back(t);
            z3.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==4){
            Zaposleni z4("ime4", "prezime4", "username4", "sifra4", 4, MASER, 0);
            Termin t(29, 4, 2020, 15, 30, false, 3);
            termini.push_back(t);
            z4.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==5){
            Zaposleni z5("ime5", "prezime5", "username5", "sifra5", 5, TREPAVICE, 0);
            Termin t(18, 4, 2020, 15, 30, false, 3);
            termini.push_back(t);
            z5.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }

    }
    friend ostream& operator<<(ostream& out, const Klijent& k);
};

#endif // KLIJENT_HPP_INCLUDED
