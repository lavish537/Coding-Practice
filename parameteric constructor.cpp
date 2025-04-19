#include<iostream>

using namespace std;

class employee{
    public:
    int age;
    
    public:
    employee(int x){
        age=x;
    }
};

int main(){

    employee e1(10);
    employee e2(20);
    employee e3(30);

    cout<<e1.age<<"\n";
    cout<<e2.age<<"\n";
    cout<<e3.age<<"\n";
    return 0;
}