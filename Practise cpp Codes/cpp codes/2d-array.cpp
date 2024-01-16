#include<iostream>
using namespace std;

int main(){

    int arr[3][4];

    
    //taking input row wise(ROW MAJOR)  
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    

    
    //taking input col wise(COL MAJOR)  
    for(int row=0; row<4; row++){
        for(int col=0; col<3; col++){
            cin>>arr[col][row];
        }
    }
    
    
    
   //printing the output
   for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;


}
}