#include<iostream>

using namespace std;

int main() {
    
    int i;
    int arr[10], n=10, key;

    cout<<"Enter the 10 elements of the array :"<< endl;
    for(i=0;i<n; i++) {
        cout<<"Enter the "<< i+1 <<" elements of the array :";
        cin>>arr[i];
    }

    cout<<"Enter the Key to find :";
    cin>>key;

    cout<<"Array:";
    for(i=0;i<n; i++) {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    for(i=0;i<n; i++) {
        if(key==arr[i]){
            cout<<"Key found at index :"<<i<<endl;
            cout<<"Key found at position :"<<i+1<<endl;
            break;
        }

    }
    if(i==n){
        cout<<"Key not found"<<endl;
    }

}