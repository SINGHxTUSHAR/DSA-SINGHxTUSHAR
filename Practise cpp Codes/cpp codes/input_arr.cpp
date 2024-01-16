#include<iostream>
using namespace std;

int main(){

    int size{};
    int even[50];
    
    cout<<"enter the size of array: ";
    cin>>size;

    cout<<"enter the elements of array: ";
    for(int i=0; i<size; i++){
        cin>>even[i];
    }cout<<endl;

     cout<<"ENTERED ARRAY ELEMENTS IS: ";
    for(int i=0; i<size; i++){
        cout<<even[i]<<" ";
    }cout<<endl;

    return 0;

}