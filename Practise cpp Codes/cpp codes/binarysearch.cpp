#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int k){
    int start=0;
    int end=n-1;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]<k){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int even[8]={1,4,9,15,21,65,489,654};

    int count_index = binary_search(even,8,8);
    cout<<"index is "<<count_index<<endl;

    return 0;
}