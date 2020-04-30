#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED

class Korisnik
{
protected:
    string username, sifra;
    string ime, prezime;
public:
    Korisnik(){
        username="";
        sifra="";
        ime="";
        prezime="";
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
};


#endif // KORISNIK_HPP_INCLUDED
