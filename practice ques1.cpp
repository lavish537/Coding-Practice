#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Base A class\n";
    }
};
class B:public A{
    public:
    B(){
        cout<<"Intermediate B class\n";
    }
};
class C{
    public:
    C(){
        cout<<"Base C class\n";
    }
};
class D:public B,public C{
    public:
    D(){
        cout<<"Derived D class\n";
    }
};
int main(){
    D obj1;
    return 0;
}