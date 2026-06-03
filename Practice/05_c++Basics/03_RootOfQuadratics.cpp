#include<iostream>

using namespace std;

int main() {

    // using formula
    int a, b, c;
    float r1, r2;
    cout << "Enter the coefficients a, b, c of the quadratic equation ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    r1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    r2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    cout << "Roots of the quadratic equation: " << r1 << " and " << r2 << endl;


}