#include<iostream>

using namespace std;

int main()
{
    // Short-circuit evaluation example
    int a = 5, b = 10;
    // Using short-circuit evaluation with logical AND (&&)
    if (a > 0 && b > 0) {
        cout << "Both a and b are positive." << endl;
    }
    return 0;
}