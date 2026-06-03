#include<iostream>
using namespace std;
    
int main()
{
	int i,n,r,sum=0,m;  // 
	cout<<"Enter the Number: ";
	cin>>n;
    m=n;

    // for(i=0;i<=n;i++)  // Take sum=1 for for loop
    // {
    //     r=n%10;
    //     n=n/10;
    //     sum=sum+(r*r*r);
    // }


    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }

    if(sum==m){
        cout<<sum<< " is a Armstrong Number"<<endl;
    }else {
        cout<<sum<< " is not a Armstrong Number"<<endl;
    }
    

	return 0;
}
