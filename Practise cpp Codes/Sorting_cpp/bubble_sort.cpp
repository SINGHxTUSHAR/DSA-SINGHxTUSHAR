/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[] , int n){
    for(int i=n-1; i>=0; i--){
        bool did_swap = false;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                did_swap = true;
            } 
        }if(did_swap == false) break;
    }

    cout<<"arr after selection sort: "<<endl;
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
    bubble_sort(arr,size);

    return 0;
}
