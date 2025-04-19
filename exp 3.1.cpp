#include<iostream>

using namespace std;

class Base {
    public:
    void displayBase() {
        cout << "Base class\n";
    }

};

class Derived : public Base {
    public:
    void displayDerived() {
    cout << "Derived class\n";
    }
};

int main() {
    cout<<"Lavish\t24BCS12448\n";
    Derived derivedObj;
    derivedObj.displayBase();
    derivedObj.displayDerived();
    return 0;
}