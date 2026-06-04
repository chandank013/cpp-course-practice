#include<iostream>

using namespace std;


int main()
{
    int a=10;
    int &r=a; // r is reference variable to a
    cout<<a<<" "<<r<<endl; // 10 10
    r=20; // changing value of r will change value of a
    cout<<a<<" "<<r<<endl; // 20 20
    return 0;
}