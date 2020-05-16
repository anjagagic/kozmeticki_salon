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
#include <vector>
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

    Termin t1(18, 12, 2020, 15, 30, true, 1);
    Termin t2(1, 1, 1, 0, 0, false, 0);
    /*Klijent k1;
    cout<<"Broj termina na pocetku:"<<t1.getBrOj()<<endl;
    {
        Termin t2(14, 6, 2020, 12, 15, false, 4);
         cout<<"Broj termina kad smo dodali novi:"<<t1.getBrOj()<<endl;
    }
    cout<<"Broj termina posle unistenja novog:"<<t1.getBrOj()<<endl;*/
    /*Klijent k1;
    //Zaposleni z1;
    //cout<<z1<<endl;
    //cout<<t1<<endl;
    /*cout<<k1<<endl;
    t1.citajFajl("terminnn.txt");
    cout<<endl<<endl;*/
    Zaposleni z1;
    //z1.pregledTermina();
    //cout<<"Broj termina:"<<t1.getBrOj()<<endl;
    //k1.zakaziTermin();
    //cout<<"Broj termina posle:"<<t1.getBrOj()<<endl;
    z1.dodajTermin(t1);
    cout<<"********Termin dodat"<<endl;
    z1.pregledTermina();
    z1.dodajTermin(t2);
    cout<<"**********Termin dodat"<<endl;
    z1.pregledTermina();
    z1.izbaciTermin(t1);
    cout<<"**********Izbacivanje"<<endl;
    z1.pregledTermina();
    if(z1.pretragaTermina(t2)==true){
        cout<<"Element pronadjen"<<endl<<endl;
    }
    else cout<<"Element nije pronadjen"<<endl<<endl;;
    Usluga* usluge[100];
    Sminka s1(500, "svadba");
    Masaza m1(300, true);
    Pedikir p1(400, "nokti");
    Manikir ma1(600, "gel lak");
    Trepavice tre1(1500, "svilene");
    usluge[0]=&s1;
    usluge[1]=&m1;
    usluge[2]=&p1;
    usluge[3]=&ma1;
    usluge[4]=&tre1;
    cout<<"Ispis dodatih usluga:"<<endl;
    for (int i=0; i<=4; i++){
        usluge[i]->ispis();
    }
    /*KozmetickiSalon k1;
    k1.dodajZaposlene();
    k1.ispisiZaposlene();
    Zaposleni z1("Milana", "Korica", "comi", "7890", 4, TREPAVICE);
    k1.pretragaTermina(z1);*/
    return 0;
}
