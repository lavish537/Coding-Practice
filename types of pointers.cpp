#include <iostream>
using namespace std;
int main()
{
    int *ptr1 = NULL; 	//null pointer
    cout<<"The value inside variable p is:"<<ptr1<<"\n";
    void *ptr2 = NULL; 	//void pointer
    printf("The size of pointer is:%d\n",sizeof(ptr2));
    int *ptr3; 	//wild pointer
    cout<<*ptr3;
    return 0;
}
