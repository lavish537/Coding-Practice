#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter size of array: ";
    cin>>n;
    int a[n],sum[n];
    cout<<"enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
    sum[0]=a[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i];
    }
    cout<<"enter no. of queries: ";
    cin>>m;
    for(int i=0;i<m;i++){
        int l=0,r=0,ans=0;
        cout<<"enter left and right indices:\n";
        cin>>l>>r;
        ans=sum[r]-sum[l-1];
        cout<<ans<<"\n";
    }
}
