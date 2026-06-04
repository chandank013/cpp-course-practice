#include<iostream>
using namespace std;
    
int main()
{
	int *p=new int; //dynamic allocation of memory for an integer
	*p=20; //assigning value to the dynamically allocated memory

	cout<<*p<<endl; //output the value stored at the dynamically allocated memory
	cout<<p<<endl; //output the address of the dynamically allocated memory
	*p=0; //setting the value at the dynamically allocated memory to null
	delete p; //deallocating the memory to prevent memory leaks
	p=nullptr; //setting the pointer to null after deallocating the memory


	// dynamic allocation of memory for an array of integers
	p=new int[5]; //dynamic allocation of memory for an array of 5 integers
	for(int i=0;i<5;i++)
	{
		p[i]=i+1; //assigning values to the dynamically allocated array
	}
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl; //output the values stored in the dynamically allocated array
	}

	delete[] p; //deallocating the memory for the array to prevent memory leaks
	p=nullptr; //setting the pointer to null after deallocating the memory

	// increse size to 10
	p=new int[10]; //dynamic allocation of memory for an array of 10 integers


    return 0;
    	
}
