#include<iostream>

using namespace std;

class Base{
    private:
        int privateVar;

    protected:
        int protectedVar;

    public:
        int publicVar;

        void setPrivateVar(int val){
            privateVar = val;
        }

        int getPrivateVar(){
            return privateVar;
        }

        void funBase(){
            protectedVar = 10; // Accessing protected member within the class
            privateVar = 20; // Accessing private member within the class
            publicVar = 30; // Accessing public member within the class
        }
};

class Derived : public Base{
    public:
        void funDerived(){
            protectedVar = 15; // Accessing protected member in derived class
            publicVar = 35; // Accessing public member in derived class

            // // We cannot access private members of the base class in the derived class
             // privateVar = 25; // Error: Cannot access private member in derived class
        }
};

int main(){
    Base b;
    Derived d;

    b.publicVar = 5; // Accessing public member directly

    // // We cannot access private and protected members directly from outside the class
    // b.privateVar = 10; // Error: Cannot access private member directly
    // b.protectedVar = 15; // Error: Cannot access protected member directly

    b.funBase();
    d.funDerived();
    return 0;
}