#include<iostream>
using namespace std;

class Rectangle
{
    public:
	void area()
	{
		cout<<"Area of Rectangle"<<endl;
	}
	
};
    
class Cuboid:public Rectangle
{
    public:
	void volume()
	{
		cout<<"Cuboid Volume"<<endl;
	}
	
};
    
int main()
{
    // Creating an object of the derived class and a pointer of the base class
	Cuboid c;
	Rectangle *p=&c;

    p->area();
	// p->volume(); // this function cannot be call	


    // creating an object of the base class and a pointer of the derived class
    Rectangle r;
    // Cuboid *ptr=&r; // This will cause a compilation error becoause we cannot assign the address of a base class object to a pointer of a derived class

    // ptr->volume(); // This would cause a compilation error
    // p->volume(); // this function cannot be call

	return 0;
	    
}
    
