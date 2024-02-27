/******************************************
* Author: TUSHAR SINGH
* Calculating the max ele in an arr
*******************************************/

#include<bits/stdc++.h>
using namespace std;

//BY USING THE SORT FUN IN STL || T.C = O(nlogn)
int largestEle(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

//BY USING THE FOR ANDF IF CONDITION || T.C = O(n)
int largest_ele(int arr[] , int n){
    int max_ele = INT_MIN;
    for(int k=0; k<n; k++){
        if(arr[k]>max_ele) max_ele = arr[k];
    } return max_ele;
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

    int ans = largest_ele(arr,size);

    cout<<"MAx ele in arr is: "<<ans<<endl;

    return 0;
}