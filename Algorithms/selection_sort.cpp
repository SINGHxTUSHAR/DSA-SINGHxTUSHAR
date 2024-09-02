#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Selection sort Algorithm
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main(){
    int arr[] = {45, 879, 2, 65, 1, 3, 4, 98, 7, 55};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    return 0;
}