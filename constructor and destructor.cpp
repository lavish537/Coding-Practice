#include <iostream>

using namespace std;

class A{
    public:
    A(){
        cout<<"hello\n";
    }
    ~A(){
        cout<<"welcome";
    }
};
int main(){
    A a1;
    return 0;
}