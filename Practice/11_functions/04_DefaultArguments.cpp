#include<iostream>

using namespace std;

// Default argument means that if the caller does not provide a value for that parameter, the default value will be used. In this example, the parameter 'c' has a default value of 0. If the caller does not provide a value for 'c', it will be treated as 0 in the function.
int add (int a, int b, int c = 0) {
    return a + b + c;
}

int main() {
    // Calculate sum of two integers
    int sum1 = add(5, 10);
    cout << "Sum of integers: " << sum1 << endl;

    // Calculate sum of three integers
    int sum3 = add(5, 10, 15);
    cout << "Sum of three integers: " << sum3 << endl;

    return 0;
}