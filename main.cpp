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

int main()
{
    Termin t1;
    t1.citajFajl("terminnn.txt");
    Klijent k;
    k.zakaziTermin();
    return 0;
}
