#include<iostream>

using namespace std;

int main()
{
    // Check if a customer is eligible for a discount offer based on their age and membership status
    int age;
    cout << "Enter your age: ";
    cin >> age;

    char isMember;
    cout << "Are you a member? (Y/N): ";
    cin >> isMember;

    if (age >= 18 && isMember == 'Y')
        cout << "You are eligible for the discount offer.";
    else
        cout << "You are not eligible for the discount offer.";

    return 0;
}