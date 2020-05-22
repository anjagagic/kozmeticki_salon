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

bool jedinstven(vector<Termin> ter, const Termin& t){
    cout<<"funkcija"<<endl;
    for(auto it=ter.begin(); it!=ter.end(); it++){
            cout<<"for"<<endl;
        if(t.getDatum().uporediDatum(it->getDatum())==true && t.getVreme().uporediVreme(it->getVreme())==true){
                cout<<"IF"<<endl;
            return true;
     }
     else{
        cout<<"else"<<endl;
     return false;}
    }
}

class Klijent: public Korisnik
{
private:
    vector <Termin> termini;
public:
    void setUsername(string un){username=un;}
    void setSifra(string sf){sifra=sf;}
    Klijent():Korisnik("username", "sifra", "ime", "prezime"){}
    Klijent(string u, string s, string i, string p):Korisnik(u, s, i, p){}

    Termin zakaziTermin(Zaposleni& z){
                            bool j;
                            do{
                            int da,me,go,sa,mi;
                            cout<<"Unesite datum-> dan: "; cin>>da; cout<<endl;
                            cout<<"                mesec: "; cin>>me; cout<<endl;
                            cout<<"                godina: "; cin>>go; cout<<endl;
                            cout<<"Unesite vreme-> sat: "; cin>>sa; cout<<endl;
                            cout<<"                minut: "; cin>>mi; cout<<endl;
                            cout<<"Unesite ID zeljenog zaposlenog"<<endl;
                            int iidd;
                            cin>>iidd;
                            Termin t1(da, me, go, sa, mi, false, iidd);
                            j=jedinstven(termini, t1);
                            if(j==true){
                                cout<<"Unesite ponovo, termin postoji"<<endl;
                            }
                            if(j==false){
                                for(auto it=termini.begin(); it<termini.end(); it++){
                                termini.push_back(t1);
                                return t1;
                            }
                            }
                            }while(j==true);

    }
    friend ostream& operator<<(ostream& out, const Klijent& k);
};

#endif // KLIJENT_HPP_INCLUDED
