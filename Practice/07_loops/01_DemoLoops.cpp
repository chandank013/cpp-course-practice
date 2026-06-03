#include <iostream>
using namespace std;

int main()
{
    int a=0;
        
    // while loop
    while(a<10)
    {
        cout<<a<<"Hello\n";
        a++;
    }
    
    int b=0;
    
    // do while loop
    do
    {
        cout<<b<<"Hello\n";
        b++;
    }
    while(b<10);
        
    // for loop
    for(int i=0;i<10;i++)
    {
        cout<<i<<"Hello\n";
    }

    // for each loop
    int arr[]={1,2,3,4,5};
    for(int x:arr)
    {
        cout<<x<<"Hello\n";
    }
        
    // infinite loop
    for(;;)
    {
        cout<<" Hello";
        a++;
    }

    return 0;
    
}
    
    
