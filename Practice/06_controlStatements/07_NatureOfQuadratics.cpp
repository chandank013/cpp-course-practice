#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        cout << "The roots are real and distinct." << endl;
    }
    else if (discriminant == 0)
    {
        cout << "The roots are real and equal." << endl;
    }
    else
    {
        cout << "The roots are complex and imaginary." << endl;
    }

    return 0;
}