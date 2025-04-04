#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    string name;
    public:
    void get_data(){
        cin>>marks>>name;
        cout<<marks<<"\n"<<name;
    }
};
int main(){
    student s1;
    s1.get_data();
    return 0;
}