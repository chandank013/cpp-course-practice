#include<iostream>

using namespace std;

class Base {
    public:
    Base() {
        cout << "Base class constructor called." << endl;
    }

    Base(int x) {
        cout << "Base class parameterized constructor called with value: " << x << endl;
    }
};

class Derived : public Base {
    public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }

    // Derived(int x) { // Calling base class parameterized constructor
    //     cout << "Derived class parameterized constructor called with value: " << x << endl;
    // }

    Derived(int x) : Base(x) { // Calling base class parameterized constructor
        cout << "Derived class parameterized constructor called with value: " << x << endl;
    }

    // Derived(int x, int y) : Base(x) { // Calling base class parameterized constructor    // Some warning may occur if the base class constructor is not defined to take two parameters
    //     cout << "Derived class parameterized constructor called with values: " << x << " and " << y << endl;
    // }
};

int main() {
    // cout << "Creating object of Derived class using default constructor:" << endl;
    // Derived d1;

    cout << "\nCreating object of Derived class using parameterized constructor:" << endl;
    Derived d2(10);

    return 0;
}
