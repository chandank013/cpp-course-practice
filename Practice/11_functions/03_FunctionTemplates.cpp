#include<iostream>

using namespace std;

template<class T>
// Function template to add two values of any type
T add(T a, T b) {
    return a + b;
}

// function template to find the maximum of two values of any type
template<class T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the add function template with integers
    int intResult = add(5, 10);
    cout << "Sum of integers: " << intResult << endl;

    // Using the add function template with doubles
    double doubleResult = add(3.5, 2.5);
    cout << "Sum of doubles: " << doubleResult << endl;

    // Using the max function template with integers
    int maxInt = maxValue(5, 10);
    cout << "Maximum of integers: " << maxInt << endl;

    // Using the max function template with doubles
    double maxDouble = maxValue(3.5, 2.5);
    cout << "Maximum of doubles: " << maxDouble << endl;

    return 0;
}