#include<iostream>

using namespace std;

class room{
    public:
    float l,b,h;
    public:
    void calc_area();
    void calc_vol();
};

void room::calc_area(){
    float area=l*b;
    std::cout<<"area is:"<<area<<"\n";
}
void room::calc_vol(){
    float vol=l*b*h;
    cout<<"volume is:"<<vol<<"\n";
}

int main(){
    cout<<"Lavish\t24BCS12448\n";
    room r1;
    cout<<"enter length:";
    cin>>r1.l;
    cout<<"enter breadth:";
    cin>>r1.b;
    cout<<"enter height:";
    cin>>r1.h;
    r1.calc_area();
    r1.calc_vol();
    return 0;
}