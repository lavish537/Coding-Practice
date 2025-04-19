#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Lavish\t24BCS12448\n";
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i,j,x;
    for(i=0;i<n-1;i++){
        x=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[x]){
                x=j;
            }
        }
        if(arr[i]>arr[x]){
            int t=arr[i];
            arr[i]=arr[x];
            arr[x]=t;
        }
    }
    cout<<"the array is :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;   
}