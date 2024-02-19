/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[] , int n){
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
        }
    }

    cout<<"arr after insertion sort: "<<endl;
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){

    int size;
    cout<<"enter the size of arr: ";
    cin>>size;

    int arr[size];
    cout<<"enter the elements of arr: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    //fun_call
    insertion_sort(arr,size);

    return 0;
}
