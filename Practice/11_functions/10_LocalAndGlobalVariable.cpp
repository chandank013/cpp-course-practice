#include<iostream>

using namespace std;

int globalVar = 10; // Global variable

void localAndGlobal() {
    int localVar = 5; // Local variable
    globalVar += localVar; // Modifying global variable using local variable
    cout << "Inside function - Local Variable: " << localVar << ", Global Variable: " << globalVar << endl;
}


int main() {
    int x = 20; // Local variable in main function
    globalVar = 30; // Modifying global variable in main function
    localAndGlobal(); // Calling function to demonstrate local and global variable usage
    globalVar++;
    cout << "Inside main - Local Variable: " << x << ", Global Variable: " << globalVar << endl;
    return 0;
}