#include<iostream>

using namespace std;

// int LinearSearch(int A[], int n, int key)
// {
//         for(int i=0; i<n;i++)
//         {
//             if(key==A[i])
//             {
//                 return i;
//             }
//         }
//         return -1;
    
// }

int LinearSearch(int *p, int n, int Key)
{
    for(int i=0; i<n;i++)
    {
        if(Key==*(p+i))  // *(p+i) is same as p[i] because p is a pointer to the first element of the array
        {
            return i;
        }
    }
    return -1;
}


int main(){

    int A[10] = {12,34,54,65,65,32,34,22,33,44};

    int k;
    cout << "Enter the Number to search: ";
    cin>>k;

    // int result = LinearSearch(A,10,k);
    // if(result != -1)
    // {
    //     cout << "Element found at index: " << result << endl;
    // }
    // else
    // {
    //     cout << "Element not found" << endl;
    // }

    // Using pointer
    int *p = A;
    int result2 = LinearSearch(p,10 ,k);

    if(result2 != -1)
    {
        cout << "Element found at index: " << result2 << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}