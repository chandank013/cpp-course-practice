#include<iostream>


using namespace std;

int count = 0; // Global variable

// Static variable: A static variable retains its value between function calls. It is initialized only once and exists for the lifetime of the program. It is shared among all instances of the function, meaning that all calls to the function will access the same static variable.
void counter() {
    int a = 5; // Local variable
    static int count = 10; // Static variable
    count++;
    cout << "Counter: " << count << ", Global Variable: " << a << endl;
}

int main() {
    counter(); // Counter: 11, Global Variable: 5
    counter(); // Counter: 12, Global Variable: 5
    counter(); // Counter: 13, Global Variable: 5
    return 0;
}