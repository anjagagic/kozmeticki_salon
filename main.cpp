#include <iostream>
#include <stdlib.h>

using namespace std;
#include <windows.h>
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
#include <fstream>
#include <string>

void pregledTerminaZaposleni(vector <Zaposleni> sviZaposleni, string username, string sifra){
      for(auto it=sviZaposleni.begin(); it<sviZaposleni.end(); it++){

          if(it->getUsername()==username && it->getSifra()==sifra){
             it->pregledTermina();
          }
          else{
            cout<<"Zaposleni nije prondjen"<<endl;
          }
    }
}
string VtoS(VrstaZaposlenog v)
{
    if(v==0)
    {
        string s="sminker";
        return s;
    }
    else if(v==1)
    {
        string s="maser";
        return s;
    }
    else if(v==2)
    {
        string s="pediker";
        return s;
    }
    else if(v==3)
    {
        string s="maniker";
        return s;
    }
    else if(v==4)
    {
        string s="trepavice";
        return s;
    }
}

void upisiZaposlenog(string nazivFajla, string tekst, char mode='w')
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
    fajl<<tekst<<endl;

}

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
        return TREPAVICE;
    }
    else if(broj==5)
    {
        return MANIKER;
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
///****************************************************************************************************************************
///****************************************************************************************************************************
int main()
{
    int odabir1;
    int odabir2;
    int odabir3;
    int odabir4;
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
        cin>>odabir1;
///REGISTRACIJA
        if(odabir1==1)
        {

            system ("CLS");
            cout<<"1 - nemate nalog? -> Registracija"<<endl;
            cout<<"2 - Logovanje"<<endl;
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
                vector<Zaposleni> sviZaposleni = ucitajSveZaposlene(k);

                do
                {
                    system("CLS");
                    cout<<"Dobrodosli!"<<endl;
                    cout<<"Izaberite opciju: 1 - zakazi termin"<<endl;
                    cout<<"                  2 - odjavi se"<<endl;
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
                        cout<<"unesite uslugu:"<<endl;
                        cin>>usluga;
                        if(usluga==1)
                        {
                            cout<<"Unesite sminkersku uslugu:"<<endl;
                            string u;
                            cin>>u;
                            s1.setUsluga(u);
                        }
                        if(usluga==3)
                        {
                            cout<<"Unesite pedikirsku uslugu:"<<endl;
                            string u;
                            cin>>u;
                            p1.setUsluga(u);
                        }
                        if(usluga==4)
                        {
                            cout<<"Unesite manikirsku uslugu:"<<endl;
                            string u;
                            cin>>u;
                            ma1.setUsluga(u);
                        }
                        if(usluga==5)
                        {
                            cout<<"Unesite uslugu za trepavice:"<<endl;
                            string u;
                            cin>>u;
                            tre1.setUsluga(u);
                        }
                        vector<Zaposleni> odabraniZaposleni = pretraziZaposlene(sviZaposleni, usluga);
                        for(auto it=odabraniZaposleni.begin(); it<odabraniZaposleni.end(); it++)
                        {
                            cout<<"ispis zaposlenog"<<endl;
                            cout<<*it<<endl;
                        }
                        int redniBroj;
                        cout<<"Unesi redni broj zaposlenog"<<endl;
                        cin>>redniBroj;
                        Termin termin=k1.zakaziTermin();
                        Zaposleni z1 = odabraniZaposleni.at(redniBroj-1);
                        k.setTerminZaposlenog(z1, termin);
                        cout<<"TERMIN DODAT"<<endl;
                        ///pisanje u fajl
                        string ULAZ1, ULAZ2, ULAZ3;
                        string ULAZ;
                        for(auto it=sviZaposleni.begin(); it<sviZaposleni.end(); it++)
                        {
                            ULAZ1=it->getIme();
                            ULAZ2=it->getPrezime();
                            ULAZ3=to_string(it->getID());
                            ULAZ = ULAZ1+","+ULAZ2+","+ULAZ3;
                            pisiTxt("ucitaniZaposleni.txt", ULAZ, 'a');
                        }
                        Sleep(1000000);
                    }
                    else if(odabir3==2)
                    {
                        cout<<"odjavljivanje..."<<endl;
                        system("cls");
                    }
                }
                while(odabir3!=2);
            }

///LOGOVANJE
            if(odabir2==2)
            {
                do
                {
                    cout<<"Uloguj se:"<<endl;
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
                        do
                        {
                            system("CLS");
                            cout<<"Dobrodosli!"<<endl;
                            cout<<"Izaberite opciju: 1 - zakazi termin"<<endl;
                            cout<<"                  2 - odjavi se"<<endl;
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
                                cout<<"unesite uslugu:"<<endl;
                                cin>>usluga;
                                if(usluga==1)
                                {
                                    cout<<"Unesite sminkersku uslugu:"<<endl;
                                    string u;
                                    cin>>u;
                                    s1.setUsluga(u);
                                }
                                if(usluga==3)
                                {
                                    cout<<"Unesite pedikirsku uslugu:"<<endl;
                                    string u;
                                    cin>>u;
                                    p1.setUsluga(u);
                                }
                                if(usluga==4)
                                {
                                    cout<<"Unesite manikirsku uslugu:"<<endl;
                                    string u;
                                    cin>>u;
                                    ma1.setUsluga(u);
                                }
                                if(usluga==5)
                                {
                                    cout<<"Unesite uslugu za trepavice:"<<endl;
                                    string u;
                                    cin>>u;
                                    tre1.setUsluga(u);
                                }
                                vector<Zaposleni> odabraniZaposleni = pretraziZaposlene(sviZaposleni, usluga);
                                for(auto it=odabraniZaposleni.begin(); it<odabraniZaposleni.end(); it++)
                                {
                                    cout<<*it<<endl;
                                }
                                int redniBroj;
                                cout<<"Unesi redni broj zaposlenog"<<endl;
                                cin>>redniBroj;
                                Termin termin=k1.zakaziTermin();
                                Zaposleni z1 = odabraniZaposleni.at(redniBroj-1);
                                k.setTerminZaposlenog(z1, termin);
                                cout<<"TERMIN DODAT"<<endl;
                                ///pisanje u fajl
                                string ULAZ1, ULAZ2, ULAZ3, ULAZ4;
                                string ULAZ;
                                for(auto it=sviZaposleni.begin(); it<sviZaposleni.end(); it++)
                                {
                                    ULAZ1=it->getIme();
                                    ULAZ2=it->getPrezime();
                                    ULAZ3=to_string(it->getID());
                                    ULAZ = ULAZ1+","+ULAZ2+","+ULAZ3;
                                    pisiTxt("ucitaniZaposleni.txt", ULAZ, 'a');
                                }

                                Sleep(5000);

                            }
                            else if(odabir3==2)
                            {
                                cout<<"odjavljivanje..."<<endl;
                                system("cls");
                            }
                        }
                        while(odabir3!=2);

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
                vector<Zaposleni> sviZaposleni = ucitajSveZaposlene(k);
                cout<<"unesite username: "<<endl;
                string u,s;
                cin>>u;
                z1.setUsername(u);
                cout<<"unesite sifru: "<<endl;
                cin>>s;
                z1.setSifra(s);
                if(k.pretragaZaposlenih(z1)==true)
                {
                    do
                    {
                        system("CLS");
                        cout<<"Dobrodosli!"<<endl;
                        cout<<"Izaberite opciju: 1 - pregled termina"<<endl;
                        cout<<"                  2 - odjavi se"<<endl;
                        cout<<"Unesite: ";
                        cin>>odabir4;
                        if(odabir4==1)
                        {
                            pregledTerminaZaposleni(sviZaposleni, u, s);
                            Sleep(10000);
                        }
                        else if(odabir4==2)
                        {

                            cout<<"odjavljivanje...";
                            system("CLS");
                        }
                    }
                    while(odabir4!=2);
                }
                else
                    cout<<"Pogresno ste uneli, pokusajte ponovo"<<endl;
            }
            while(k.pretragaZaposlenih(z1)==false);
        }

    }
    while(odabir1!=3);
    return 0;
}
