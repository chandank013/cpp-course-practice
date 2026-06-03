#include<iostream>

using namespace std;

int main()
{
    int n, i, r;
    cout<<"Enter the Number: " <<endl;
    cin>>n;


    for(i=1;i<=n;i++)
    {
        r=n%10;
        n=n/10;

        cout<<r<<endl;

    }

    return 0;
}