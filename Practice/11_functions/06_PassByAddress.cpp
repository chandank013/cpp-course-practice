#include<iostream>

using namespace std;

// Pass by address: The address of the actual parameter is passed to the function. Changes made to the parameter inside the function affect the original argument.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl; // Values are swapped
    return 0;
}
