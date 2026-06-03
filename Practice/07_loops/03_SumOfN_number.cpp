#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the Number: " <<endl;
    cin>>n;

    int sum=0;
    for( i=1; i<=n ;i++) {
        sum=sum+i;
    }

    cout<<"Sum of n number is: "<<sum ;



    
    return 0;
}