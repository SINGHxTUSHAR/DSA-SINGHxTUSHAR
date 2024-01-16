//SUM FOR TWO NUMBER 

#include<iostream>
using namespace std;

int main(){
    //variable declaration
    int num1{},num2{};
    
    //taking the input from the user
    cout<<"ENTER THE FIRST NUMBER :";
    cin>>num1;

    cout<<"ENTER THE SECOND NUMBER :";
    cin>>num2;

    int sum{};
    //calculating the sum 
    sum = num1 + num2;


    cout<<endl;
    cout<<"SUM FOR NUM1 AND NUM2 IS :"<<sum<<endl;

    return 0;
}