#include<iostream>
using namespace std;
class person{
	public:
		string name;
		int number;
};
int main(){
	person obj;
	obj.name="lavish";
	obj.number=99;
	cout<<obj.name<<"\n"<<obj.number;
	return 0;
}