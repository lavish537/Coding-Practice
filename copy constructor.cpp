#include<iostream>

using namespace std;

class copyconstructor{
    public:
    int x,y;
    
    public:
    copyconstructor(int x1,int y1){
        x=x1;
        y=y1;
    }

    copyconstructor(copyconstructor &sam){
        x=sam.x;
        y=sam.y;
    }
    void display(){
        cout<<"x="<<x<<"\ny="<<y;
    }
};
int main(){
    copyconstructor obj1(10,15);
    copyconstructor obj2=obj1;
    cout<<"\nnormal constructor:\n";
    obj1.display();
    cout<<"\ncopy constructor:\n";
    obj2.display();
    return 0;
}
