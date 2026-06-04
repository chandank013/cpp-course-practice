#include<iostream>
using namespace std;
    
int main()
{
	int count=1;

	// // Nested loop to print a 5x5 pattern of numbers
	// for(int i=0;i<5;i++)
	// {
	//     for(int j=0;j<5;j++)
	// 	{
	// 	    cout<<count<<" ";
	// 	    count++;
	//     }
	    	
	// 	cout<<endl;
	// }

    // Nested loop to print a 5x5 pattern of coordinates
    for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
		{
		    cout<<"("<<i<<","<<j<<") ";
	    }
	    	
		cout<<endl;
	}

    
	    
	return 0;
	
}
