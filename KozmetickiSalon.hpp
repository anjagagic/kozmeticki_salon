#ifndef KOZMETICKISALON_HPP_INCLUDED
#define KOZMETICKISALON_HPP_INCLUDED
#include <fstream>
#include "usluga.hpp"
#include "vrstaZaposlenog.hpp"
#include "klijent.hpp"

class KozmetickiSalon
{
private:
    string nazivSalona;
    vector <Usluga> usluge;
    vector <Zaposleni> zaposleni;
    vector <Klijent> klijenti;
public:
    string getNazivSalona()const
    {
        return nazivSalona;
    }
    KozmetickiSalon()
    {
        nazivSalona="Selfish";
    }
    vector<string> splitSen(string str, char c=',')
    {
        string w = "";
        vector<string> v;
        for (auto rem : str)
        {
            if (rem==c)
            {
                v.push_back(w);
                w="";
            }
            else
            {
                w=w+rem;
            }
        }
        v.push_back(w);

        return v;
    }
    VrstaZaposlenog convert(const string& str)
    {
        if(str == "SMINKER")
            return SMINKER;
        else if(str == "MANIKER")
            return MANIKER;
        else if(str == "PEDIKER")
            return PEDIKER;
        else if(str == "TREPAVICE")
            return TREPAVICE;
        else if(str == "MASER")
            return MASER;
    }

    void ucitajZaposlene(string n)
    {
        string zaposleniF=n;
        string linija;
        vector<string> result;
        ifstream fajl (zaposleniF);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    Zaposleni z(result[0], result[1], result[2], result[3], stoi(result[4]), convert(result[5]));
                    zaposleni.push_back(z);
                }
            }
            fajl.close();
        }
        else
            cout << "Neuspesno otvoren fajl";
    }
    void dodajZaposlene()
    {
        string fajl="zaposlenii.txt";
        ucitajZaposlene("zaposlenii.txt");
    }

    void ispisiZaposlene()
    {
        cout<<"Zaposleni:"<<endl;
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            cout<<*it<<endl;
        }
    }
    void ispisiSminkere(){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(it->getZaposleni()==SMINKER){
                cout<<*it<<endl;
            }

        }
    }void ispisiManikere(){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(it->getZaposleni()==MANIKER){
                cout<<*it<<endl;
            }

        }
    }
    void ispisiPedikere(){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(it->getZaposleni()==PEDIKER){
                cout<<*it<<endl;
            }

        }
    }
    void ispisiMasere(){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(it->getZaposleni()==MASER){
                cout<<*it<<endl;
            }

        }
    }
    void ispisiTrepavice(){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(it->getZaposleni()==TREPAVICE){
                cout<<*it<<endl;
            }

        }
    }
    /*void dodajTermin(Termin& t, int id){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(it->getID()==id){
                it->dodajTermin(t);
            }

        }
    }
    void ispisiTermin(Zaposleni& z){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            cout<<"z.getID(): "<<z.getID()<<endl;
            cout<<"it->getID(): "<<it->getID()<<endl;
            if(it->getID()==z.getID()){
                it->pregledTermina();
            }

        }
    }
    Zaposleni pretragaTermina(const Zaposleni& z){
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++){
        if(z.getID()==it->getID()){
            return z;
        }
        else
        cout<<"Zaposleni nije pronadjen"<<endl;
    }
    }*/
    bool pretragaZaposlenih(const Zaposleni& z)
    {
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(z.getUsername()==it->getUsername() && z.getSifra()==it->getSifra())
            {
                return true;
            }
        }
        return false;
    }

    void ucitajKlijente(string n)
    {
        string klijentiF=n;
        string linija;
        vector<string> result;
        ifstream fajl (klijentiF);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    Klijent k(result[0], result[1], result[2], result[3]);
                    klijenti.push_back(k);
                }
            }
            fajl.close();
        }
        else
            cout << "Neuspesno otvoren fajl";
    }
    void dodajKlijente()
    {
        string fajl="klijentii.txt";
        ucitajKlijente("klijentii.txt");
    }
    bool pretragaKlijenata(const Klijent& k)
    {
        for(auto it=klijenti.begin(); it<klijenti.end(); it++)
        {
            if(k.getUsername()==it->getUsername() && k.getSifra()==it->getSifra())
            {
                return true;
            }
        }
        return false;
    }

};

#endif // KOZMETICKISALON_HPP_INCLUDED
