#include<iostream>

using namespace std;

int main()
{
    // Check if the current time is within working hours (9 AM to 5 PM)
    int hour;
    cout << "Enter the current hour (0-23): ";
    cin >> hour;

    if (hour >= 9 && hour < 17)
        cout << "It is within working hours.";
    else
        cout << "It is outside of working hours.";

    return 0;
}