#include<iostream>

using namespace std;

class base
{
    public:
    void display()
    {
        cout<<"Base class function called"<<endl;
    }
    
};

class derived:public base
{
    public:
    void show()
    {
        cout<<"Derived class function called"<<endl;
    }
    
};

int main()
{
    derived d;  // Creating an object of the derived class
    base *ptr = &d; // Creating a pointer of the base class

    ptr->display(); // Accessing base class function using derived class object
    // ptr->show();    // This would cause a compilation error

    return 0;
}