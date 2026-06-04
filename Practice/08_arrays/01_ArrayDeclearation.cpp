#include<iostream>

using namespace std;


int main()
{
    int arr[5]; // Array declaration with size 5
    arr[0] = 10; // Assigning values to the array
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int arr2[5] = {1, 2, 3, 4, 5}; // Array declaration and initialization

    int arr3[5] = {0}; // Array declaration and initialization with default value 0

    int arr4[] = {10, 20, 30, 40, 50}; // Array declaration and initialization without specifying size

    int size = sizeof(arr) / sizeof(arr[0]); // Calculating the size of the array   


    // Printing the values of the array
    for(int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // Printing the values of the second array
    for(int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << arr2[i] << endl;
    }

    // Printing the values of the third array
    for(int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << arr3[i] << endl;
    }

    // Printing the values of the fourth array
    for(int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << arr4[i] << endl;
    }

    // Printing the size of the array
    cout << "Size of the array: " << size << endl;

    // print using for-each loop
    cout << "Elements of arr2 using for-each loop: ";
    for(int element : arr2)
    {
        cout << element << " ";
    }
    cout << endl;

    // print using for-each loop using auto keyword
    cout << "Elements of arr4 using for-each loop with auto keyword: ";
    for(auto element : arr4)
    {
        cout << element << " ";
    }
    cout << endl;



    char charArr[5] = {'H', 'e', 'l', 'l', 'o'}; // Array of characters
    cout << "Character array: ";
    for(char c : charArr)
    {
        cout << c;
    }   
    cout << endl;

    return 0;
} 