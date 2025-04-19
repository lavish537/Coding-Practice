#include<iostream>

using namespace std;

inline int Add(int x,int y){
    return x+y;
}
int main(){
    cout<<"Lavish\t24BCS12448";
    cout<<"\n\t The sum is: "<<Add(10,20);
    cout<<"\n\t The sum is: "<<Add(45,83);
    cout<<"\n\t The sum is: "<<Add(27,48);
    return 0;
}
//execution time : 0.020 s
