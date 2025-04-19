#include<iostream>
using namespace std;
int main(){
    cout<<"Lavish\t24BCS12448";
    int n;
    cout<<"\nenter size of array: ";
    cin>>n;
    cout<<"\nenter elements:-\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int x=i+1;x<n;x++){
            if(arr[x]<arr[i]){
                int temp=arr[x];
                for(int k=x;k>i;k--){
                    arr[k]=arr[k-1];
                }
                arr[i]=temp;
            }
        }
    }
    cout<<"the elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}