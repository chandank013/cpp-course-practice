#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the Number: " <<endl;
    cin>>n;

    int fact=1;
    for( i=1; i<=n ;i++) {
        fact=fact*i;
    }

    cout<<"Sum of n number is: "<<fact ;



    
    return 0;
}