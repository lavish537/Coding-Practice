#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A ";
    }
};
class B{
    public:
    B(){
        cout<<"B ";
    }
};
class C:public A,public B{
    public:
    C(){
        cout<<"C ";
    }
};
class D:public C{
    public:
    D(){
        cout<<"D ";
    }
};
class E:public D{
    public:
    E(){
        cout<<"E\n";
    }
};
int main(){
    E obj1;
    return 0;
}