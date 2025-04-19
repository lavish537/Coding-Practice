#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A ";
    }
};
class B:public A{
    public:
    B(){
        cout<<"B ";
    }
};
class C:public A{
    public:
    C(){
        cout<<"C ";
    }
};
class D: public B{
    public:
    D(){
        cout<<"D\n";
    }
};
class E: public B{
    public:
    E(){
        cout<<"E\n";
    }
};
class F: public C{
    public:
    F(){
        cout<<"F\n";
    }
};
class G: public C{
    public:
    G(){
        cout<<"G\n";
    }
};
int main(){
    D obj1;
    E obj2;
    F obj3;
    G obj4;
    return 0;
}

