#include<iostream>
using namespace std;
int main(){
    int n=4,digits[4]={1,2,3,4};
    if(digits[n-1]==9){
            digits[n-2]+=1;
            digits[n-1]=0;
        }
        else{
            digits[n-1]+=1;
        }
        for(int i=0;i<n;i++){
            cout<<digits[i]<<" ";
        }
        return 0;
}