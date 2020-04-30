#ifndef KLIJENT_HPP_INCLUDED
#define KLIJENT_HPP_INCLUDED
#include "termin.hpp"
#include "sminka.hpp"
#include "manikir.hpp"
#include "pedikir.hpp"
#include "masaza.hpp"
#include "trepavice.hpp"
class Klijent: public Korisnik
{
private:
    Termin termini[50];
public:
    Termin getT(){return termini;}
    void zakaziTermin(){
        int unos;
        cout<<"Odaberite uslugu"<<endl;
        cout<<"1. Sminka"<<endl;
        cout<<"2. Manikir"<<endl;
        cout<<"3. Pedikir"<<endl;
        cout<<"4. Masaza"<<endl;
        cout<<"5. Trepavice"<<endl;
        while(unos<1 && unos>5){
            cin>>unos;
        }
        if (unos==1){
            Sminka s(500, "usluga1");
            Termin t(30, 4, 2020, 15, 30, false, 3);
            termini[broj++]=t;
            s.dodajTermin(t, termini);
        }
        if (unos==2){
            Manikir m(500, "usluga2");
            Termin t(1, 4, 2020, 15, 30, false, 3);
            termini[broj++]=t;
            m.dodajTermin(t, termini);
        }
        if (unos==3){
            Pedikir p(500, "usluga3");
            Termin t(5, 4, 2020, 15, 30, false, 3);
            termini[broj++]=t;
            p.dodajTermin(t, termini);
        }
        if (unos==4){
            Masaza mm(500, "usluga4");
            Termin t(29, 4, 2020, 15, 30, false, 3);
            termini[broj++]=t;
            mm.dodajTermin(t, termini);
        }
        if (unos==5){
            Trepavice tr(500, "usluga5");
            Termin t(18, 4, 2020, 15, 30, false, 3);
            termini[broj++]=t;
            tr.dodajTermin(t, termini);
        }

    }
};

#endif // KLIJENT_HPP_INCLUDED
