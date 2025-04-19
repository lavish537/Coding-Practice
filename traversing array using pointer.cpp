#include <iostream>
using namespace std;
int main()
{
    int i, A[3];
    int *p;
    p=&A[0];
    cout<<"Input the array elements\n";
    for(i=0;i<3;i++)    {
     cin>>*(p+i);    }
    cout<<"Array elemenets are:\n";
    for(i=0;i<3;i++)    {
     cout<<*(p+i)<<endl;    }
    return 0;
}
