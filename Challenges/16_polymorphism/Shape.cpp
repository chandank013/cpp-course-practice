#include<iostream>

using namespace std;

class Shape
{
    public:
    virtual void draw()
    {
        cout<<"Drawing Shape"<<endl;
    }
};

class Rectangle:public Shape
{
    public:
    void draw()
    {
        cout<<"Drawing Rectangle"<<endl;
    }
};

class Circle:public Shape
{
    public:
    void draw()
    {
        cout<<"Drawing Circle"<<endl;
    }
};

int main()
{
    Shape *ptr=new Rectangle();
    ptr->draw();
    
    ptr=new Circle();
    ptr->draw();
}