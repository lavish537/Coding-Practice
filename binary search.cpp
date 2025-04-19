#include<iostream>
using namespace std;
int main(){
    cout<<"Lavish\t24BCS12448\n";
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"\nenter elements:-\n";
    int a[n],beg=0,end=n,x,index,mid=(beg+end)/2;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter searching element: ";
    cin>>x;
    while(beg<end && a[mid]!=x){
        if(x<a[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=int(beg+end)/2;
    }
    if (x==a[mid]){
        index=mid;
        cout<<x<<" is at "<<index<<" index value";
    }
    else if(x!=a[mid]){
        cout<<x<<" is not in array";
    }
    return 0;
}