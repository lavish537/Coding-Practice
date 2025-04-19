#include<iostream>
using namespace std;
class triangle{
    public:
    int hypoteneous;
    int perpendicular;
    int base;
    public:
    void display_area(){
        int area=perpendicular*base/2;
        cout<<"area is: "<<area;
    }
};
int main(){
    triangle obj1;
    obj1.hypoteneous=10;
    obj1.perpendicular=20;
    obj1.base=20;
    obj1.display_area();
    return 0;
}