#include<iostream>

using namespace std;

class Rectangle{
    
    public:
        int length;
        int breadth;

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2 * (length + breadth);
        }
};

// four part of OOPs
// 1. Abstraction (hiding complexity and showing only essential features to the user)
// 2. Encapsulation (data hiding secure from mishandling)
// 3. Inheritance (code reusability and method overriding)
// 4. Polymorphism (compile time and run time)


int main(){

    // creating object in heap
    Rectangle *p = new Rectangle; 
    p->length = 10;
    p->breadth = 5;

    cout<<"Area: "<<p->area()<<endl;
    cout<<"Perimeter: "<<p->perimeter()<<endl;


    return 0;
}