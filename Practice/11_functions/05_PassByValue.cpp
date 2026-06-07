#include<iostream>

using namespace std;

// Pass by value: A copy of the actual parameter is passed to the function. Changes made to the parameter inside the function do not affect the original argument.
int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main()
{
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl; // Values remain unchanged
    return 0;

}