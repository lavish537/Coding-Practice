#include<iostream>
using namespace std;
int main(){
    int a[10],largest=0,smallest=a[0];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        if (largest<a[i]){
            largest=a[i];
        }
        if (smallest>a[i]){
            smallest=a[i];
        }
    }
    cout<<"the largest element is : "<<largest<<endl;
    cout<<"the smallest element is : "<<smallest<<endl;
    return 0;
}