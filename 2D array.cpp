#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the size of 2D array:\n";
    cin>>n>>m;
    int arr1[n][m];
    cout<<"enter elements of 2D array:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"the 2D array is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i][j]%2==0){
                even+=arr1[i][j];
            }
            else if(arr1[i][j]%2!=0){
                odd+=arr1[i][j];
            }
        }
    }
    cout<<"\nsum of even numbers is: "<<even<<"\n";
    cout<<"sum of odd numbers is: "<<odd<<"\n";
    return 0;
}