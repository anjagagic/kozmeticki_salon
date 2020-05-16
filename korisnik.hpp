#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include <vector>
class Korisnik
{
protected:
    string username, sifra;
    string ime, prezime;
public:
    Korisnik(){
        username="username";
        sifra="sifra";
        ime="ime";
        prezime="prezime";
    }
    Korisnik(string u, string s, string i, string p)
    {
        username=u;
        sifra=s;
        ime=i;
        prezime=p;
    }
    void login(){
        cout<<"unesite username: "<<endl;
        cin>>username;
        cout<<"unesite sifru: "<<endl;
        cin>>sifra;
    }
    void registracija(){
        cout<<"unesite ime: "<<endl;
        cin>>ime;
        cout<<"unesite prezime: "<<endl;
        cin>>prezime;
        cout<<"unesite username: "<<endl;
        cin>>username;
        cout<<"unesite sifru: "<<endl;
        cin>>sifra;
        //ispis da li je uspesno ili nije
    }
    friend ostream& operator<<(ostream& out, const Korisnik& k);
    string getUsername()const{return username;}
    string getSifra()const{return sifra;}
    string getIme()const{return ime;}
    string getPrezime()const{return prezime;}
};

#endif // KORISNIK_HPP_INCLUDED
