#include <iostream>

using namespace std;
#include "termin.hpp"
#include "vreme.hpp"
#include "vrstaZaposlenog.hpp"
#include "klijent.hpp"
#include "manikir.hpp"
#include "sminka.hpp"
#include "trepavice.hpp"
#include "usluga.hpp"
#include "KozmetickiSalon.hpp"
#include "masaza.hpp"
#include "korisnik.hpp"
#include "pedikir.hpp"
#include "datum.hpp"
ostream& operator<<(ostream& out, const Zaposleni& z){
        out<<"ZAPOSLENI - ISPIS"<<endl;
        out<<"-----------------"<<endl;
        out<<"Username:"<<z.getUsername()<<endl;
        out<<"Sifra:"<<z.getSifra()<<endl;
        out<<"Ime:"<<z.getIme()<<endl;
        out<<"Prezime:"<<z.getPrezime()<<endl;
        out<<"ID:"<<z.getID()<<endl;
        out<<"Vrsta Zaposlenog:"<<z.getZaposleni()<<endl;
        out<<endl;
        return out;
}
ostream& operator<<(ostream& out, const Klijent& k){
    out<<"KLIJENT - ISPIS"<<endl;
    out<<"--------------"<<endl;
    out<<"Username:"<<k.getUsername()<<endl;
    out<<"Sifra:"<<k.getSifra()<<endl;
    out<<"Ime:"<<k.getIme()<<endl;
    out<<"Prezime:"<<k.getPrezime()<<endl;
    out<<endl;
    return out;
}

int main()
{
    Termin t1;
    cout<<"Broj termina na pocetku:"<<t1.getBrOj()<<endl;
    {
        Termin t2;
         cout<<"Broj termina kad smo dodali novi:"<<t1.getBrOj()<<endl;
    }
    cout<<"Broj termina posle unistenja novog:"<<t1.getBrOj()<<endl;
    Klijent k1;
    Zaposleni z1;
    cout<<z1<<endl;
    cout<<t1<<endl;
    cout<<k1<<endl;
    t1.citajFajl("terminnn.txt");
    k1.zakaziTermin();
    cout<<"Broj termina na kraju:"<<t1.getBrOj()<<endl;
    return 0;
}
