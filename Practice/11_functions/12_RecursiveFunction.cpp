#include<iostream>

using namespace std;

// A recursive function is a function that calls itself in order to solve a problem. It typically has a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems.    
void fun(int n)
{
	if(n>0)
	{
	    cout<<n<<endl;
		fun(n-1);
	}
}
    
int main()
{
	int x=5;
	fun(x);
	    
}
    
