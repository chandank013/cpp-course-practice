#include<iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Method 1: Using formula
    int sum = n * (n + 1) / 2;

    // Method 2: Using loop
    int sum2 = 0;
    for (int i = 1; i <= n; i++) {
        sum2 += i; // sum = sum + i;
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    cout << "Sum of first " << n << " natural numbers (using loop) is: " << sum2 << endl;

    return 0;
}