/*Author: TUSHAR SINGH*/
/*BUBBLE SORT USING RECURSION*/
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){

    bool did_swap{false};

    //base case
    if(n==1) return;

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            did_swap = true;
        } 
    }
    //cond to check for best case
    if(did_swap==false) return;

    //recursive relation
    bubble_sort(arr, n-1);
}

void print_data(int arr[], int n){
    
    //printing arr after the bubble sort
    cout<<"Elements after the bubble sorting: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

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
    //fun_call to sort the the arr
    bubble_sort(arr,size);
    
    //to print the data
    print_data(arr, size);

    return 0;
}