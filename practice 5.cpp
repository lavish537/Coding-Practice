#include<iostream>
using namespace std;

class student{
    public:
    int marks;
    int id;
    public:
    void display(){
        cout<<"\nstudent id is: "<<id;
        cout<<"\nstudent marks are: "<<marks;
    }
};
int main(){
    student obj1[2];
    obj1[0].marks=99;
    obj1[0].id=12345;
    obj1[1].marks=98;
    obj1[1].id=67890;
    obj1[0].display();
    obj1[1].display();
    return 0;
}