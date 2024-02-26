/*Author: TUSHAR SINGH*/
/*INSERTION SORT USING RECURSION*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n, int i){
    //base case
    if(i==n) return;

    for(int j=i; j>0; j--){
        if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
    }

    //recursive relation
    insertion_sort(arr,n,i+1);
}

void print_data(int arr[], int n){
    cout<<"Elements after the insertion sort: "<<endl;
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
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
    //fun_call to sort
    insertion_sort(arr,size,0);
    //to print data
    print_data(arr,size);

    return 0;

}

    
