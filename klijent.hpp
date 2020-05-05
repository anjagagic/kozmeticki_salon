#ifndef KLIJENT_HPP_INCLUDED
#define KLIJENT_HPP_INCLUDED
#include "vrstaZaposlenog.hpp"
#include "termin.hpp"
class Klijent: public Korisnik
{
private:
    Termin termini[50];
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
            Termin t(30, 4, 2020, 15, 30, false, 3, 0);
            termini[t.getBroj()+1]=t;
            z1.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==2){
            Zaposleni z2("ime2", "prezime2", "username2", "sifra2", 2, MANIKER, 0);
            Termin t(1, 4, 2020, 15, 30, false, 3, 0);
            termini[t.getBroj()+1]=t;
            z2.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==3){
            Zaposleni z3("ime3", "prezime3", "username3", "sifra3", 3, PEDIKER, 0);
            Termin t(5, 4, 2020, 15, 30, false, 3, 0);
            termini[t.getBroj()+1]=t;
            z3.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==4){
            Zaposleni z4("ime4", "prezime4", "username4", "sifra4", 4, MASER, 0);
            Termin t(29, 4, 2020, 15, 30, false, 3, 0);
            termini[t.getBroj()+1]=t;
            z4.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==5){
            Zaposleni z5("ime5", "prezime5", "username5", "sifra5", 5, TREPAVICE, 0);
            Termin t(18, 4, 2020, 15, 30, false, 3, 0);
            termini[t.getBroj()+1]=t;
            z5.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }

    }
};

#endif // KLIJENT_HPP_INCLUDED
