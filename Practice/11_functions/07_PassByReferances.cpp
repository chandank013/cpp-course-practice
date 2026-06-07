#include<iostream>

using namespace std;

// Pass by reference: A reference to the actual parameter is passed to the function. Changes made to the parameter inside the function affect the original argument. Actually, same as pass by value but with reference variable. It is more efficient than pass by value as it avoids copying the entire object.
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl; // Values are swapped
    return 0;
}
