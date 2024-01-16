#include<iostream>
using namespace std;

int main(){

    cout<<endl;
    
    //variable declaration
    float p{},r{},t{};
    
    //taking the input from the user
    cout<<"ENTER THE PRINCIPAL VALUE :";
    cin>>p;

    cout<<"ENTER THE RATE VALUE :";
    cin>>r;

    cout<<"ENTER THE TIME VALUE :";
    cin>>t;
    
    //calculation
    float si = (p*r*t)/100;
    
    cout<<endl;
    cout<<"THE SIMPLE INTEREST FOR THE GIVEN VALUES IS: "<<si<<endl;

    return 0;
}