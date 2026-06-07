#include<iostream>
using namespace std;
    
int * fun()
{
	int *p=new int[5];
	for(int i=0;i<5;i++)
	{
		p[i]=5*i;
	}
	    
	cout<< "Pointer address: " << p << endl;
	return p;
}
    
int main()
{
	int *ptr=fun();
	cout<< "Pointer address: " << ptr << endl;

	for(int i=0;i<5;i++)
	cout<< "Element " << i << ": " << ptr[i] << endl;
		
}
    
