#include<iostream>

using namespace std;

// Structure
struct Rectangle
{
    int length;
    int breadth;
    
    int area()
    {
        return length*breadth;
    }
};

// Class

class RectangleClass
{
    private:
    int length;
    int breadth;
    
    public:
    RectangleClass(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    // Structure
    Rectangle r1;
    r1.length=10;
    r1.breadth=5;
    cout<<"Area of Rectangle using Structure: "<<r1.area()<<endl;
    
    // Class
    RectangleClass r2(10,5);
    cout<<"Area of Rectangle using Class: "<<r2.area()<<endl;
    return 0;
}