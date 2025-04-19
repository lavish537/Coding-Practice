#include <iostream>
using namespace std;
int main(){
    int n,count,sum=0,left=0;
    cout<<"enter size of an array: ";
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        left+=a[i-1];
        sum-=a[i];
        if(left==sum/2){
            cout<<"index "<<i<<" is an equilibrium point\n";
            count+=1;
        }

    }
    cout<<"total equilibrium points are:"<<count;
    return 0;
}
