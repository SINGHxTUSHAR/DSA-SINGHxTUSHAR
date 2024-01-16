/***********************************************
* WAR TO SWAP THE ALTERNATE ELEMENTS OF AN ARRAY.
*************************************************/


#include<iostream>

using namespace std;


void print_out(int arr[] , int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void rev_array(int arr[] , int size){

    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap( arr[i] , arr[i+1] );
        }
    }cout<<endl;

}

int main(){

    int even[50];
    int size{};

    cout<<"enter the size of array: ";
    cin>>size;

    cout<<"enter the array elements: ";
    for(int i=0; i<size; i++){
        cin>>even[i];
    }

    rev_array(even,size);
    print_out(even,size);

    return 0;


}