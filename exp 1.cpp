#include<iostream>
using namespace std;
int main(){
	int marks[5],total=0;
	cout<< "NAME- Lavish , UID- 24BCS12448\n";
	cout<< "ENTER YOUR MARKS IN 5 SUBJECTS\n";
	for(int i=0;i<5;i++){
		cin>>marks[i];
	}
	for(int i=0;i<5;i++){
		total+=marks[i];
	}	
	cout<<"TOTAL MARKS "<< total;
	cout<<"\nAVERAGE MARKS "<< total/5;
	return 0;	
}