/***************************************************************
* Author: TUSHAR SINGH
* CALCULATING THE SECOND LARGEST & SECOND SMALLEST ELE IN AN ARR
* T.C = O(N) & S.C = O(1)
****************************************************************/

#include<bits/stdc++.h>
using namespace std;

//BY USING THE FOR & IF CONDITION || T.C = O(n)
int second_largest(int arr[], int n){
    //calculating the largest ele
    int max_ele = INT_MIN;
    for(int k=0; k<n; k++){
        if(arr[k]>max_ele) max_ele = arr[k];
    }
    //calculating second largest ele
    int sec_max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>sec_max && arr[i]<max_ele) sec_max =arr[i];
    }return sec_max;
}

//FUN TO CALCULATE THE SECOND MIN ELE
int second_smallest(int arr[], int n){
    int min_ele = INT_MAX;
    for(int j=0; j<n; j++){
        if(arr[j]<min_ele) min_ele = arr[j];
    }
    //second smallest ele
    int sec_min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<sec_min && arr[i]>min_ele) sec_min = arr[i];
    }return sec_min;
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

    int sec_max = second_largest(arr, size);   //second largest ele
    int sec_min = second_smallest(arr, size);  //second smallest ele
  
    cout<<"Second largest ele is: "<<sec_max<<endl;
    cout<<"Second smallest ele is: "<<sec_min<<endl;

    return 0;
}
