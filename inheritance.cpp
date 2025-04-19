#include<iostream>

using namespace std;

class A{
    public:
    int id_A;
};

class B:public A{
    public:
    int id_B;
};

class C:public B{
    public:
    int id_C;
};

int main(){
    C obj1;
    obj1.id_A=9;
    obj1.id_B=7;
    obj1.id_C=8;
    cout<<"A id is : "<<obj1.id_A<<"\n";
    cout<<"B id is : "<<obj1.id_B<<"\n";
    cout<<"C id is : "<<obj1.id_C<<"\n";
    return 0;
}