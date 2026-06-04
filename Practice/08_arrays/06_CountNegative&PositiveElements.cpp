#include<iostream>

using namespace std;

int main() {
    
    int i;
    int arr[10]={11,-12,13,14,-15,16,23,-45,67,89};
    int n=10;
    int l=0,h=n;
    int mid,key;

    // Display Array
    cout<<"Array:";
    for(i=0;i<n; i++) {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    int countPositive=0, countNegative=0;
    for(i=0;i<n; i++) {
        if(arr[i]>0){
            countPositive++;
        }else if(arr[i]<0){
            countNegative++;
        }
    }

    cout<<"Count of Positive Elements: "<<countPositive<<endl;
    cout<<"Count of Negative Elements: "<<countNegative<<endl;

}