#include<iostream>

using namespace std;

class operations{
    public:
    int x,y,add,sub;
    public:
    void get();
    void addition();
    void subtraction();
};
inline void operations::get(){
    cout<<"enter first value:";
    cin>>x;
    cout<<"enter second value:";
    cin>>y;
}
inline void operations::addition(){
    cout<<"\nthe sum is:"<<x+y;
}
inline void operations::subtraction(){
    cout<<"\nthe diff is:"<<x-y;
}
int main(){
    cout<<"Lavish\t24BCS12448\n";
    operations xyz;
    xyz.get();
    xyz.addition();
    xyz.subtraction();
    return 0;
}