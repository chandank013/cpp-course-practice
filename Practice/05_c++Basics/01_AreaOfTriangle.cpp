#include<iostream>

using namespace std;

int main() {

    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;

    float s = (a + b + c) / 2.0; // semi-perimeter
    float area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula

    cout << "Area of the triangle: " << area << endl;

    return 0;
}