#include<iostream>

using namespace std;

int main(){
    cout<<"Lavish\t24BCS12448\n";
    int n,pos;
    cout<<"enter size of an array: ";
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"enter position you want to delete: ";
    cin>>pos;

    for(int i=pos-1;i<n;i++){
        a[i]=a[i+1];
    }
    
    n--;
    
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    
    return 0;
}