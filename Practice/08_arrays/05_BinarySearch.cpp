#include<iostream>

using namespace std;

int main() {
    
    int i;
    int arr[10]={11,12,13,14,15,16,23,45,67,89};
    int n=9;
    int l=0,h=n;
    int mid,key;

    // Inter Key
    cout<<"Enter the Key to find :";
    cin>>key;

    // Display Array
    cout<<"Array:";
    for(i=0;i<n; i++) {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    // Binary Search Logic

    while(l<=h) {
        mid=(l+h)/2;
        if(key==arr[mid]){
            cout<<"key found at index :"<<mid<<endl;
            cout<<"key found at position :"<<mid+1<<endl;
            return 0;
        }
        else if(key<arr[mid]){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    if(i==n){
        cout<<"Key not found"<<endl;
    }

}