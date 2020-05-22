#include <iostream>
#include <stdlib.h>

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
#include <unordered_set>

void pisiTxt(string nazivFajla, string tekst1, char mode='w')
{
    ofstream fajl;
    if (mode=='a')
    {
        fajl.open (nazivFajla, ios_base::app);
    }
    else
    {
        fajl.open (nazivFajla);
    }
    fajl<<tekst1<<endl;
    fajl.close();

}

ostream& operator<<(ostream& out, const Korisnik& k)
{
    out<<"KORISNIK - ISPIS"<<endl;
    out<<"----------------"<<endl;
    out<<"Username:"<<k.getUsername()<<endl;
    out<<"Sifra:"<<k.getSifra()<<endl;
    out<<"Ime:"<<k.getIme()<<endl;
    out<<"Prezime:"<<k.getPrezime()<<endl;
    out<<endl;
    return out;
}
ostream& operator<<(ostream& out, const KozmetickiSalon& k)
{
    //out<<"\t\t\t         "<<k.getNazivSalona()<<endl;
    out<<"--------------------------------------------------------------------------------"<<endl;
    return out;
}
ostream& operator<<(ostream& out, const Zaposleni& z)
{
    out<<"ZAPOSLENI - ISPIS"<<endl;
    out<<"-----------------"<<endl;
    out<<"Ime:"<<z.getIme()<<endl;
    out<<"Prezime:"<<z.getPrezime()<<endl;
    out<<"ID:"<<z.getID()<<endl;
    out<<"Vrsta Zaposlenog: ";
    if(z.getZaposleni()==0)
    {
        out<<"SMINKER"<<endl;
    }
    if(z.getZaposleni()==1)
    {
        out<<"MASER"<<endl;
    }
    if(z.getZaposleni()==2)
    {
        out<<"PEDIKER"<<endl;
    }
    if(z.getZaposleni()==3)
    {
        out<<"MANIKER"<<endl;
    }
    if(z.getZaposleni()==4)
    {
        out<<"TREPAVICE"<<endl;
    }
    out<<endl;
    return out;
}
ostream& operator<<(ostream& out, const Klijent& k)
{
    out<<"KLIJENT - ISPIS"<<endl;
    out<<"--------------"<<endl;
    out<<"Username:"<<k.getUsername()<<endl;
    out<<"Sifra:"<<k.getSifra()<<endl;
    out<<"Ime:"<<k.getIme()<<endl;
    out<<"Prezime:"<<k.getPrezime()<<endl;
    out<<endl;
    return out;
}

vector<Zaposleni> ucitajSveZaposlene(const KozmetickiSalon& ks)
{
    return ks.getZaposlenii();
}
VrstaZaposlenog convertt(const int& broj)
{
    if(broj==1)
    {
        return SMINKER;
    }
    else if(broj==2)
    {
        return MASER;
    }
    else if(broj==3)
    {
        return PEDIKER;
    }
    else if(broj==4)
    {
        return MANIKER;
    }
    else if(broj==5)
    {
        return TREPAVICE;
    }
}

vector<Zaposleni> pretraziZaposlene(vector<Zaposleni>sviZaposleni, int usluga)
{
    vector <Zaposleni> temp;
    for(auto it=sviZaposleni.begin(); it<sviZaposleni.end(); it++)
    {
        if(it->getZaposleni()==convertt(usluga))
        {
            temp.push_back(*it);
        }
    }
    return temp;
}

int main()
{
    do
    {
        KozmetickiSalon k;
        cout<<"\t\t\t    Kozmeticki salon"<<endl;
        //cout<<"\t\t\t    ----------------"<<endl;
        cout<<k<<endl;
        cout<<"Dobrodosli!"<<endl;
        cout<<"Vi ste: 1 - klijent"<<endl;
        cout<<"        2 - zaposleni"<<endl;
        cout<<"        3 - izadji"<<endl;
        Zaposleni z1;
        Klijent k1;
        k.dodajKlijente();
        k.dodajZaposlene();
        int odabir1;
        cin>>odabir1;
        if(odabir1==1)
        {

            system ("CLS");
            cout<<"1 - nemate nalog? -> Registracija"<<endl;
            cout<<"2 - Logovanje"<<endl;
            int odabir2;
            cin>>odabir2;
            if(odabir2==1)
            {

                string ulaz1, ulaz2, ulaz3, ulaz4;
                cout<<"Unesite ime:"<<endl;
                cin>>ulaz3;
                cout<<"Unesite prezime:"<<endl;
                cin>>ulaz4;
                cout<<"Unesite username:"<<endl;
                cin>>ulaz1;
                cout<<"Unesite sifru:"<<endl;
                cin>>ulaz2;
                string ulaz;
                ulaz = ulaz1+","+ulaz2+","+ulaz3+","+ulaz4;
                pisiTxt("klijentii.txt", ulaz, 'a');
                system("CLS");
                cout<<"unesite username: "<<endl;
                string u,s;
                cin>>u;
                k1.setUsername(u);
                cout<<"unesite sifru: "<<endl;
                cin>>s;
                k1.setSifra(s);
                if(k.pretragaKlijenata(k1)==true)
                {
                    vector<Zaposleni> sviZaposleni = ucitajSveZaposlene(k);
                    system("CLS");
                    cout<<"Dobrodosli!"<<endl;
                    cout<<"Izaberite opciju: 1 - zakazi termin"<<endl;
                    cout<<"                  2 - odjavi se"<<endl;
                    int odabir3;
                    cin>>odabir3;
                    if(odabir3==1)
                    {

                    }
                    else if(odabir3==2){
                        cout<<"odjavljivanje..."<<endl;
                    }
                }
                else
                {
                    cout<<"KRAJ";
                }
            }
            if(odabir2==2)
            {
                cout<<"Uloguj se:"<<endl;
                do
                {
                    cout<<"unesite username: "<<endl;
                    string u,s;
                    cin>>u;
                    k1.setUsername(u);
                    cout<<"unesite sifru: "<<endl;
                    cin>>s;
                    k1.setSifra(s);
                    vector<Zaposleni> sviZaposleni = ucitajSveZaposlene(k);
                    if(k.pretragaKlijenata(k1)==true)
                    {
                        system("CLS");
                        cout<<"Dobrodosli!"<<endl;
                        cout<<"Izaberite opciju: 1 - zakazi termin"<<endl;
                        cout<<"                  2 - izadji"<<endl;
                        int odabir3;
                        cin>>odabir3;
                        if(odabir3==1)
                        {
                            Usluga* usluge[100];
                            Sminka s1;
                            Masaza m1;
                            Pedikir p1;
                            Manikir ma1;
                            Trepavice tre1;
                            usluge[0]=&s1;
                            usluge[1]=&m1;
                            usluge[2]=&p1;
                            usluge[3]=&ma1;
                            usluge[4]=&tre1;
                            cout<<"Odaberite uslugu:"<<endl;
                            for (int i=0; i<=4; i++)
                            {
                                usluge[i]->ispis();
                            }
                            int usluga;
                            cout<<"odaberi uslugu:"<<endl;
                            cin>>usluga;
                            /*cout<<"Unesite zeljenu uslugu za odabrano:"<<endl;
                            string u;
                            cin>>u;
                            s1.setUsluga(u);*/
                            /// ovde ti napravi funkciju koja pronalazi sve korisnike za odabranu uslugu i prikazuje ih
                            /// napisala sam deklaraciju gore u mainu
                            vector<Zaposleni> odabraniZaposleni = pretraziZaposlene(sviZaposleni, usluga);
                            for(auto it=odabraniZaposleni.begin(); it<odabraniZaposleni.end(); it++)
                            {
                                cout<<*it<<endl;
                            }
                            int redniBroj;
                            cout<<"Unesi redni broj zaposlenog"<<endl;
                            cin>>redniBroj;
                            cout<<redniBroj<<endl;
                            Termin termin=k1.zakaziTermin(z1, usluga);
                            Zaposleni z1 = odabraniZaposleni.at(redniBroj-1);
                            k.setTerminZaposlenog(z1, termin);
                            cout<<"TERMIN DODAT"<<endl;
                        }
                        else if(odabir3==2)
                        {
                            cout<<"odjavljivanje..."<<endl;
                        }
                    }
                    else
                        cout<<"Pogresno ste uneli, unesite ponovo"<<endl;
                }
                while(k.pretragaKlijenata(k1)==false);
            }

        }
///ZAPOSLENI
        else if(odabir1==2)
        {
            system ("CLS");
            cout<<"Uloguj se:"<<endl;
            do
            {
                cout<<"unesite username: "<<endl;
                string u,s;
                cin>>u;
                z1.setUsername(u);
                cout<<"unesite sifru: "<<endl;
                cin>>s;
                z1.setSifra(s);
                if(k.pretragaZaposlenih(z1)==true)
                {
                    system("CLS");
                    cout<<"Dobrodosli!"<<endl;
                    cout<<"Izaberite opciju: 1 - pregled termina"<<endl;
                    cout<<"                  2 - izadji"<<endl;
                    int odabir2;
                    cout<<"Unesite: ";
                    cin>>odabir2;
                    if(odabir2==1)
                    {
                        z1.pregledTermina();
                    }
                    else if(odabir2==2)
                    {

                        cout<<"odjavljivanje...";
                        system("CLS");
                    }
                }
                else
                    cout<<"Pogresno ste uneli, pokusajte ponovo"<<endl;
            }
            while(k.pretragaZaposlenih(z1)==false);
        }

}while(odabir1!=3);
    /*Termin t1(18, 12, 2020, 15, 30, true, 1);
    Termin t2(1, 1, 1, 0, 0, false, 0);
    Klijent k1;
    Zaposleni z1;
    z1.pregledTermina();
    cout<<"Broj termina:"<<t1.getBrOj()<<endl;
    k1.zakaziTermin();
    cout<<"Broj termina posle:"<<t1.getBrOj()<<endl;
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
        cout<<"Element pronadjen"<<t2<<endl<<endl;
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
    cout<<endl<<endl;
    KozmetickiSalon koz1;
    koz1.dodajZaposlene();
    koz1.ispisiZaposlene();
    Zaposleni z2("Milana", "Korica", "comi", "m", 4, TREPAVICE);
    if(koz1.pretragaZaposlenih(z2)==true){
        cout<<"Pronadjen"<<endl;
    }
    else cout<<"Nije pronadjen"<<endl;*/
    return 0;
}
