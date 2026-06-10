#include<iostream>
using namespace std;
    
class Outer
{
	class Inner
    {
		public:
		void display()
		{
		cout<<"Display of Inner"<<endl;
		}
	};

    public:
		void fun()
		{
			i.display();
		}
	                
    Inner i;
    
};

int main()
{
	// Outer::Inner i; // Error: 'Inner' is not a member of 'Outer'
	Outer o;
	o.fun();
	
	// // Alternatively, we can create an object of Inner class using an object of Outer class
	// Outer::Inner i; // Error: 'Inner' is not a member of 'Outer'
	// i.display();
}
    
