#include<iostream>

using namespace std;

int main()
{
    int n,i,sum=0,j=0;
    cout<<"Enter the Number: " <<endl;
    cin>>n;

    
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            j++;
            sum=sum+i;
        }
    }
    cout<<endl;
    cout<<"Perfect Number: " <<sum<<endl;
    cout<<"Number of Factor: " <<j<<endl;

    if(j<=2) {
        cout<< n <<" is Prime Number";
    }
    else{
        cout<< n <<" is not Prime Number";
    }

    return 0;
}