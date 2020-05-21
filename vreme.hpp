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
    void setSat(int s){sat=s;}
    void setMinut(int m){minut=m;}
    int getSat()const{return sat;}
    int getMinut()const{return minut;}
    bool uporediVreme(const Vreme&  v){
        if (sat==v.sat && minut==v.minut){
            return true;
        }
    return false;
}
friend ostream& operator<<(ostream& out, Vreme& v);
};


#endif // VREME_HPP_INCLUDED
