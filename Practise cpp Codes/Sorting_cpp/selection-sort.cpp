/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[] , int n){
    int min_val = INT_MAX;
    int index{};

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<min_val){
                min_val = arr[j];
                index = j;
            } 
        }
        min_val = INT_MAX;
        swap(arr[index] , arr[i]);
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
    selection_sort(arr,size);

    return 0;
}