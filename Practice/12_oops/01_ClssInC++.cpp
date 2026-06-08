#include<iostream>

using namespace std;

// Class definition
class Rectangle{
    public:
        int length;
        int breadth;

        int area(){
            return length * breadth;
        }
};

int main(){
    Rectangle r1,r2;  // creating an object of class Rectangle
    r1.length = 10;
    r1.breadth = 5;
    r2.length = 15;
    r2.breadth = 10;

    cout<<"Area of rectangle 1 is: "<<r1.area()<<endl;
    cout<<"Area of rectangle 2 is: "<<r2.area()<<endl;

    return 0;
}