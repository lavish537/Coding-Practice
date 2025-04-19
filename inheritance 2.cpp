#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"1";
    }
};
class B:public A{
    public:
    B(){
        cout<<"2";
    }
};
class C:public A{
    public:
    C(){
        cout<<"3";
    }
};
class D: public C{
    public:
    D(){
        cout<<"4";
    }
};
class E: public C{
    public:
    E(){
        cout<<"5";
    }
};
class F: public C{
    public:
    F(){
        cout<<"6";
    }
};
class G: public B{
    public:
    G(){
        cout<<"7";
    }
};
class H: public B{
    public:
    H(){
        cout<<"8";
    }
};
class I: public B{
    public:
    I(){
       cout<<"9"; 
    }
};
int main(){
 /*  A obj1;
    B obj2;
    C obj3;
    D obj4;
    E obj5;
    F obj6;
    G obj7;
    H obj8;*/ 
    I obj9;
    return 0;
}

