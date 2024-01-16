/****************************************
*Author: TUSHAR SINGH , Topic: RECURSION
*****************************************/



#include<iostream>
using namespace std;

void reachHOME( int src, int dest){

    //printing the current location.
    cout<<" current source "<<src<<" current destination "<<dest<<endl;

    //base case
    if(src == dest){
        cout<<"REACHED HOME"<<endl;
        return ;
    }

    //processing
    src++;

    //recursive relation
    reachHOME(src , dest);
}

int  main(){

    int src{} , dest{} ;

    cout<<"enter the source :"<<endl;
    cin>>src;
    cout<<"enter the destination :"<<endl;
    cin>>dest;

    reachHOME( src , dest);

    return 0;

}