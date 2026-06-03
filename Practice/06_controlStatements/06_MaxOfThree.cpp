#include<iostream>

using namespace std;

int main()
{
    // Find the maximum of three numbers
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1>num2 && num1>num3){
        cout << "The maximum number is: " << num1;
    }
    else if(num2>num3){
        cout << "The maximum number is: " << num2;
    }
    else{
        cout << "The maximum number is: " << num3;

    }

    return 0;
}