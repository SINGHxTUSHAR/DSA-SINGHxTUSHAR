/**********************************************************
*Author: TUSHAR SINGH , Topic: BUBBLE_SORT USING RECURSION
***********************************************************/


#include<iostream>
using namespace std;

void sortArray(int* arr, int n){

    //base case
    if(n == 0 || n == 1){
        return ;
    }

    //1st case-place largest element at correct position.
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    //recursive call
    sortArray(arr , n-1);

}
        
int main(){

    int n{};
    cout<<"enter the size of array :";
    cin>>n;

    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //function call
    sortArray(arr , n);
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}