#include<iostream>

using namespace std;

class Parent
{
    public:
    void display()
    {
        cout<<"Parent class function called"<<endl;
    }
    
};

class Child:public Parent
{
    public:
    void display()
    {
        cout<<"Child class function called"<<endl;
    }
    
};

int main()
{
    Parent p;
    Child c;
    
    p.display();
    c.display();
    
    return 0;
}