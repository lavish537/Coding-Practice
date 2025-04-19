#include<iostream>

using namespace std;

int main(){
    cout<<"Lavish\t24BCS12448\n";
    int N,K,item;
    cout<<"enter size of an array: ";
    cin>>N;
    int LA[N];
    
    for(int j=0;j<N;j++){
        cin>>LA[j];
    }
    
    cout<<"enter position: ";
    cin>>K;
    cout<<"enter element you want to insert: ";
    
    cin>>item;
    for(int j=N-1;j>=K-1;j--){
        LA[j+1]=LA[j];
    }
    
    LA[K-1]=item;
    N++;
    
    for(int j=0;j<N;j++){
        cout<<LA[j];
    }
    
    return 0;
}