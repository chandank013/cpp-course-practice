#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Display name using if-else statement
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;


    // Display name using else-if ladder
    if (name == "Alice") {
        cout << "Hi Alice! Nice to see you." << endl;
    }
    else if (name == "Bob") {
        cout << "Hey Bob! How are you?" << endl;
    }
    else if (name == "Charlie") {
        cout << "Hello Charlie! Welcome back." << endl;
    }
    else {
        cout << "Nice to meet you, " << name << "!" << endl;
    }

    // Display month using else-if ladder
    int month;
    cout << "Enter a month number (1-12): ";
    cin >> month;

    if (month == 1) {
        cout << "January" << endl;
    }
    else if (month == 2) {
        cout << "February" << endl;
    }
    else if (month == 3) {
        cout << "March" << endl;
    }
    else if (month == 4) {
        cout << "April" << endl;
    }
    else if (month == 5) {
        cout << "May" << endl;
    }
    else if (month == 6) {
        cout << "June" << endl;
    }
    else if (month == 7) {
        cout << "July" << endl;
    }
    else if (month == 8) {
        cout << "August" << endl;
    }
    else if (month == 9) {
        cout << "September" << endl;
    }
    else if (month == 10) {
        cout << "October" << endl;
    }
    else if (month == 11) {
        cout << "November" << endl;
    }
    else if (month == 12) {
        cout << "December" << endl;
    }
    else {
        cout << "Invalid month number!" << endl;
    }

    // Display digit in word using else-if ladder
    int digit;
    cout << "Enter a digit (0-9): ";
    cin >> digit;

    if (digit == 0) {
        cout << "Zero" << endl;
    }
    else if (digit == 1) {
        cout << "One" << endl;
    }
    else if (digit == 2) {
        cout << "Two" << endl;
    }
    else if (digit == 3) {
        cout << "Three" << endl;
    }
    else if (digit == 4) {
        cout << "Four" << endl;
    }
    else if (digit == 5) {
        cout << "Five" << endl;
    }
    else if (digit == 6) {
        cout << "Six" << endl;
    }
    else if (digit == 7) {
        cout << "Seven" << endl;
    }
    else if (digit == 8) {
        cout << "Eight" << endl;
    }
    else if (digit == 9) {
        cout << "Nine" << endl;
    }
    else {
        cout << "Invalid digit!" << endl;
    }

    return 0;
}