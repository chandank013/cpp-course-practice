#include<iostream>

using namespace std;

int main() {
    
    int i;
    int arr[7] = {2,5,12,4,8,9,3};
    int n=7;

    // Max of the array
    int max=arr[0];
    for(i=1;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    // Min of the array
    int min=arr[0];
    for(i=1;i<=n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"Maximum elements amongs all the array :"<< max<<endl;
    cout<<"Minimum elements amongs all the array :"<< min<<endl;

}