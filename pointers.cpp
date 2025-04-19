#include <iostream>
using namespace std;
int main()
{
   int a=10;    //variable declaration
   int *p;      //pointer variable declaration
   p=&a;        //store address of variable a in pointer p
   cout<<"Address stored in a variable p is:"<<p<<"\n";  //accessing the address
   cout<<"Value stored in a variable p is:"<<*p<<"\n";   //accessing the value
   return 0;
}
