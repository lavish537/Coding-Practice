#include<iostream>

using namespace std;

class Employee{
    char Name[25];
    int Age;
    char Desg[25];
    long Salary;
    public:
    void GetData();
    void PutData();
    };
    
void Employee :: GetData(){
    cout<<"\nEnter Employee Name : ";
    cin>>Name;
    cout<<"\nEnter Employee Age : ";
    cin>>Age;
    cout<<"\nEnter Employee Designation:";
    cin>>Desg;
    cout<<"\nEnter Employee Salary : ";
    cin>>Salary;
}

void Employee :: PutData(){
    cout<<"\nEmployee Name : "<<Name;
    cout<<"\nEmployee Age : "<<Age;
    cout<<"\nEmployee Designation:"<<Desg;
    cout<<"\nEmployee Salary : "<<Salary;
}
int main(){
    cout<<"Lavish\t24BCS12448\n";
    Employee E[5];
    E[5].GetData();
    E[5].PutData();
    return 0;
}
