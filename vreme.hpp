#ifndef VREME_HPP_INCLUDED
#define VREME_HPP_INCLUDED

class Vreme
{
private:
    int sat;
    int minut;
public:
    Vreme(){
        sat=0;
        minut=0;
    }
    Vreme(int s, int m){
        sat=s;
        minut=m;
    }
};


#endif // VREME_HPP_INCLUDED
