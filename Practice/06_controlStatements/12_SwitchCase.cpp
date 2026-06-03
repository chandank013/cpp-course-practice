#include<iostream>

using namespace std;

int main() {
    
    // int day;
    // cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    // cin >> day;

    // // Using switch-case to determine the day of the week based on user input
    // switch(day) 
    // {
    //     case 1:
    //         cout << "Monday" << endl;
    //         break;
    //     case 2:
    //         cout << "Tuesday" << endl;
    //         break;
    //     case 3:
    //         cout << "Wednesday" << endl;
    //         break;
    //     case 4:
    //         cout << "Thursday" << endl;
    //         break;
    //     case 5:
    //         cout << "Friday" << endl;
    //         break;
    //     case 6:
    //         cout << "Saturday" << endl;
    //         break;
    //     case 7:
    //         cout << "Sunday" << endl;
    //         break;
    //     default:
    //         cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    // }

    // Menu example using switch-case
    int choice;
    cout << "Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    int a, b, result;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1:
            cout << "You selected Add." << endl;
            result = a + b;
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "You selected Subtract." << endl;
            result = a - b;
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "You selected Multiply." << endl;
            result = a * b;
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "You selected Divide." << endl;
            if (b != 0) {
                result = a / b;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}