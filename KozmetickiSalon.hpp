#ifndef KOZMETICKISALON_HPP_INCLUDED
#define KOZMETICKISALON_HPP_INCLUDED
#include "usluga.hpp"
#include "vrstaZaposlenog.hpp"

class KozmetickiSalon
{
private:
    string nazivSalona;
    vector <Usluga> usluge;
    vector <Zaposleni> zaposleni;
    vector <Klijent> klijenti;
public:
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
    if(str == "SMINKER") return SMINKER;
    else if(str == "MANIKER") return MANIKER;
    else if(str == "PEDIKER") return PEDIKER;
    else if(str == "TREPAVICE") return TREPAVICE;
    else if(str == "MASER") return MASER;
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
    void dodajZaposlene(){
        string fajl="zaposlenii.txt";
        ucitajZaposlene("zaposlenii.txt");
    }

    void ispisiZaposlene(){
        cout<<"Zaposleni:"<<endl;
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++){
            cout<<*it<<endl;
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
    }
};

#endif // KOZMETICKISALON_HPP_INCLUDED
