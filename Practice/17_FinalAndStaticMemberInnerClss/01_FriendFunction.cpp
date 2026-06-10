#include<iostream>

using namespace std;

class Your;
class My
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend Your;
    friend void fun1();
};

// friend class (not a member of any class)
class Your
{
    public:
    My m;
    void fun()
    {
        m.a=10;
        m.b=10;
        m.c=10;

        cout<<m.a<<" "<<m.b<<" "<<m.c<<endl;
    }
    
};

// friend function (not a member of any class)
void fun1()
{
    My m;
    m.a=10;
    m.b=10;
    m.c=10;

    cout<<m.a<<" "<<m.b<<" "<<m.c<<endl;
}

int main()
{
    Your *y= new Your();  // friend class can be accessed by creating an object of the class
    y->fun();
    delete y;

    fun1();  // friend function can be called directly without creating an object of the class
}