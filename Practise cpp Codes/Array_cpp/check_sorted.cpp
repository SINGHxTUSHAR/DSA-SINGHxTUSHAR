/********************************
* Author: TUSHAR SINGH
* CHECK ARR IS SORTED OR NOT
*********************************/

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }
  return true;
}
//checking for sorted or not
void sorted_arr(int arr[], int n){
    bool sorted = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]) sorted = false;
    }
    if(sorted==true) cout<<"arr is sorted"<<endl;
    else cout<<"arr is not sorted"<<endl;
}

int main(){

    int size;
    cout<<"enter the size of arr: ";
    cin>>size;

    int arr[size];
    cout<<"enter the arr elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }cout<<endl;

    sorted_arr(arr, size);
    return 0;
}