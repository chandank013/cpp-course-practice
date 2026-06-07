#include<iostream>

using namespace std;

// function overloading: same function name but different parameters
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b) {
    return a + b;
}

// min of numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

int min(int a, int b, int c) {
    return min(min(a, b), c);
}

int main() {
    int x = 5, y = 10, z = 15;
    float j = 2.3f, k = 3.7f;

    cout << "Sum of 2 and 3: " << add(x, y) << endl; // calls add(int, int)
    cout << "Sum of 1, 2 and 3: " << add(x, y, z) << endl; // calls add(int, int, int)
    cout << "Sum of 1.5 and 2.5: " << add(j, k) << endl; // calls add(float, float)

    cout << "Min of 5 and 10: " << min(x, y) << endl; // calls min(int, int)
    cout << "Min of 5, 10 and 15: " << min(x, y, z) << endl; // calls min(int, int, int)

    return 0;
}