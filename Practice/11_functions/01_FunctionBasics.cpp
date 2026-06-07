#include<iostream>
using namespace std;
    
void display()
{
	cout<<"Hello";
}

// adding of two numbers
float add(float a, float b)
{
	return a+b;
}

// max of three numbers
float max(float a, float b, float c)
{
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
		return b;
	else
		return c;
}

// calculate m power n
float power(float m, int n)
{
	float result = 1.0;
	for(int i=1; i<=n; i++)
		result *= m;
	return result;
}

    
int main()
{
	display();

	float sum = add(10.5, 20.3);
	cout<<"\nSum: "<<sum;
	
	float maximum = max(10.5, 20.3, 15.7);
	cout<<"\nMaximum: "<<maximum;

	float powerResult = power(2.0, 3);
	cout<<"\n2 to the power of 3: "<<powerResult;

	return 0;
	    
}
    