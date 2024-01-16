#include<iostream>
using namespace std;

bool binarySearch( int* arr, int s, int e, int k){

    //base case
    //element not found
    if(s>e){
        return false;
    }
    
    int mid = s + (e-s)/2;

    //elemet found
    if(arr[mid] == k){
        return true;
    }
    
    //searching for element
    //recursive call
    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }

}

int main(){

    int n{};

    int arr[5] = { 1,2,3,5,9};
    
    //cout<<"Enter the size of array :";
    //cin>>n;

    //int* arr = new int[n];

    /*for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }cout<<endl;*/

    int s = 0;
    int e = n-1;
    int k = 3;

    
    //cout<<"Enter the key value :"<<endl;
    //cin>>key;

    bool temp = binarySearch(arr, 0 , 4, 3);

    if(temp){
        cout<<"Element present"<<endl;
    } 
    else{
        cout<<"Element not present"<<endl;
    }

    return 0;
}