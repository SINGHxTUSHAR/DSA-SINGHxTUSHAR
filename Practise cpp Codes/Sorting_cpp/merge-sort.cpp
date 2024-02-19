/************************************************************
* Author: TUSHAR SINGH
* Merger sort with using a temp vector & without pointers
* T.C = O(nlogn)  || S.c = O(n)
**************************************************************/


#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int mid, int e){
    
    //temp vector to store the sorted arr
    vector<int>temp;

    int left = s;  //starting index of left half of arr
    int right = mid+1; //starting index of right half of arr

    //storing ele in temp after sorting
    while((left<=mid) && (right<=e)){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //if thier are some ele left in left half of arr
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    //if their are some ele left in right half of arr
    while(right<=e){
        temp.push_back(arr[right]);
        right++;
    }

    //pushing all sorted ele in arr
    for(int k=s; k<=e; k++){
        arr[k] = temp[k-s];
    }

}

void merge_sort(int arr[] , int s, int e){

    //base case
    if(s>=e) return ;

    int mid = (s+e)/2;
    
    //left arr
    merge_sort(arr , s , mid);

    //right arr
    merge_sort(arr, mid+1, e);
    
    //fun to merge two sorted arr
    merge(arr, s, mid, e);
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
    merge_sort(arr, 0 , size-1);

    cout<<"****************************************************"<<endl;

    //printin the sorted arr
    cout<<"arr after merge-sort: "<<endl;
    for(int j=0; j<size; j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}