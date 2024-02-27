#include<bits/stdc++.h>
using namespace std;

// T.C = O(n) & S.C = O(n) : considering that passed arr is already sorted
int remove_duplicates(int arr[], int n){

    //As teh set contains only unique values
    set<int>set;  

    //inserting the ele of arr into set
    for(int i=0; i<n; i++){
        set.insert(arr[i]);
    }
    int set_size = set.size();
    int j=0;
    
    //pushing the set ele into the arr
    for(auto ele : set){
        arr[j++] = ele;
    }
    //index upto which the arr is unique
    return set_size;
}

//USING THE TWO-POINTER APPROACH || T.C = O(n) & S.C = O(1)
int removeDuplicates(int arr[], int n){
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
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
    
    //considering that arr is already sorted
    int index = remove_duplicates(arr, size);
    
    cout<<"arr after removinfg duplicate ele :"<<endl;
    for(int i=0; i<index; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}