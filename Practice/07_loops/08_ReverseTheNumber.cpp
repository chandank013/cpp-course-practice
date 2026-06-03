#include<iostream>
using namespace std;
    
int main()
{
	int i,n,r,rev=0;
	cout<<"Enter the Number";
	cin>>n;

    // for(i=1;i<n;i++)
    // {
    //     r=n%10;
    //     n=n/10;
    //     rev=rev*10+r;
    // }
    // cout<< "Reverse Number is: "<<rev<<endl;
	    
	while(n>0)
	{
		r=n%10;
	    n=n/10;
		rev=rev*10+r;
	}
	cout<<"Reverse Number is"<<rev;
	    
	return 0;
}
