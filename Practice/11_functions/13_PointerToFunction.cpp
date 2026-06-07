#include<iostream>

using namespace std;

void display()
{
    cout << "Hello, World!" << endl;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Declare a pointer to a function that takes no arguments and returns void
    void (*funcPtr)();

    // Assign the address of the display function to the function pointer
    funcPtr = &display;

    // Call the function using the function pointer
    (*funcPtr)(); // or simply funcPtr();

    

    // Declare a pointer to a function that takes two integers and returns an integer
    int (*maxPtr)(int, int);

    // Assign the address of the max function to the function pointer
    maxPtr = &max;

    // Call the function using the function pointer
    int result = (*maxPtr)(10, 20); // or simply maxPtr(10, 20);

    cout << "Maximum of 10 and 20 is: " << result << endl;

    return 0;
}