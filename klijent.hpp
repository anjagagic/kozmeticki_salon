#ifndef KLIJENT_HPP_INCLUDED
#define KLIJENT_HPP_INCLUDED

#include "vrstaZaposlenog.hpp"
#include "termin.hpp"
#include "manikir.hpp"
#include "sminka.hpp"
#include "trepavice.hpp"
#include "usluga.hpp"
#include "masaza.hpp"
#include "pedikir.hpp"


class Klijent: public Korisnik
{
private:
    vector<Termin> termini;
public:
    void setUsername(string un){username=un;}
    void setSifra(string sf){sifra=sf;}
    Klijent():Korisnik("username", "sifra", "ime", "prezime"){}
    Klijent(string u, string s, string i, string p):Korisnik(u, s, i, p){}

    Termin zakaziTermin(Zaposleni& z){
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
                        cin>>usluga;
                        if(usluga==1)
                        {
                            cout<<"Unesite sminkersku uslugu:"<<endl;
                            string u;
                            cin>>u;
                            s1.setUsluga(u);
                            int da,me,go,sa,mi;
                            cout<<"Unesite datum-> dan: "; cin>>da; cout<<endl;
                            cout<<"                mesec: "; cin>>me; cout<<endl;
                            cout<<"                godina: "; cin>>go; cout<<endl;
                            cout<<"Unesite vreme-> sat: "; cin>>sa; cout<<endl;
                            cout<<"                minut: "; cin>>mi; cout<<endl;
                            cout<<"Odaberite zaposlenog:"<<endl;
                            if(z.getZaposleni()==SMINKER){
                                cout<<z;
                            }
                            cout<<"Unesite ID zeljenog zaposlenog"<<endl;
                            int iidd;
                            cin>>iidd;
                            Termin t1(da, me, go, sa, mi, false, iidd);
                            termini.push_back(t1);
                            for(auto it=termini.begin(); it<termini.end(); it++){
                                cout<<"ispis termina"<<endl;
                                cout<<*it<<endl;
                            }
                            return t1;
                        }
    }
        /*if (usluga==2){
            Zaposleni z2("ime2", "prezime2", "username2", "sifra2", 2, MANIKER);
            Termin t(1, 4, 2020, 15, 30, false, 3);
            termini.push_back(t);
            z2.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==3){
            Zaposleni z3("ime3", "prezime3", "username3", "sifra3", 3, PEDIKER);
            Termin t(5, 4, 2020, 15, 30, true, 3);
            termini.push_back(t);
            z3.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==4){
            Zaposleni z4("ime4", "prezime4", "username4", "sifra4", 4, MASER);
            Termin t(29, 4, 2020, 15, 30, false, 3);
            termini.push_back(t);
            z4.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }
        if (unos==5){
            Zaposleni z5("ime5", "prezime5", "username5", "sifra5", 5, TREPAVICE);
            Termin t(18, 4, 2020, 15, 30, true, 3);
            termini.push_back(t);
            z5.dodajTermin(t);
            cout<<"Termin zakazan"<<endl;
        }

    }*/
    friend ostream& operator<<(ostream& out, const Klijent& k);
};

#endif // KLIJENT_HPP_INCLUDED
