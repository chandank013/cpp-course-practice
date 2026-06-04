#include<iostream>

using namespace std;

int main() {

    int A[2][3]={{3, 4, 5}, {5, 6, 7}};
    int B[2][3]={{11, 12, 13} ,{14, 15, 16}};
    int C[2][3];

    // Multiplication of matrix
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j] = A[i][j]*B[i][j];
        }
    }

    // Displaying the result
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}