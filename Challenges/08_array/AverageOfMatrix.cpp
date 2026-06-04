#include<iostream>

using namespace std;


int main()
{

    int matrix[3][4];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += matrix[i][j];
        }
    }   

    float average = sum / 12.0; // 12 is the total number of elements in the matrix
    cout << "The average of the matrix is: " << average << endl;
    return 0;
}