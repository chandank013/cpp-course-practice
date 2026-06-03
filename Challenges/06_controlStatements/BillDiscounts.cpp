#include<iostream>

using namespace std;


int main()
{
    double billAmount;
    cout << "Enter the bill amount: ";
    cin >> billAmount;

    double discount = 0.0;

    if (billAmount >= 1000)
    {
        discount = 0.20; // 20% discount
    }
    else if (billAmount >= 500)
    {
        discount = 0.10; // 10% discount
    }

    double discountedAmount = billAmount * (1 - discount);
    cout << "The discounted bill amount is: " << discountedAmount << endl;

    return 0;
}