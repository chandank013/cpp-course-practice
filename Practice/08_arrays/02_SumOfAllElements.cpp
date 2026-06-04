#include<iostream>

using namespace std;

int main() {
    
    int i;
    int arr[6] = {2,5,7,4,8,9};
    int n=6;

    int sum=0;
    for(i=1;i<=n;i++){
        sum=sum+arr[i];
    }

    cout<<"Sum of all elements of the array is :"<< sum<<endl;


}