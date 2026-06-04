#include<iostream>
using namespace std;
    
int main()
{

    // // code for printing right angle triangle pattern
    // for(int i=0;i<5;i++)
	// {
	//     for(int j=0;j<5;j++)
	// 	{
	// 	    if(i>=j)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<"   ";
    //         }
	//     }
	    	
	// 	cout<<endl;
	// }

    // // code for printing inverted right angle triangle pattern
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if(i+j<=4)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // // code for printing right angle triangle pattern
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if(i+j>=4)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    // // code for printing inverted right angle triangle pattern
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if(i<=j)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // code for printing isosceles triangle pattern
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i+j>=4 && i-j<=0)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }













    // // code for printing square pattern
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if(i==0 || i==4 || j==0 || j==4)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<endl;
    // }



    
	    
	return 0;
	
}
