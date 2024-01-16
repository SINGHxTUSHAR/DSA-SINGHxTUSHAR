/**************
*BINARY SEARCH
***************/

#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int s=0;
    int e=size-1;

    int mid = s + (e-s)/2;

    while(s<=e){

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        int mid = s + (e-s)/2;
    }
    return -1;
    
}


int main()
{

    int even[10]={2,8,8,13,16,21};

    int index = binarysearch(even, 6, 21);

    cout<<"index is"<<index<<endl;
    return 0;
}