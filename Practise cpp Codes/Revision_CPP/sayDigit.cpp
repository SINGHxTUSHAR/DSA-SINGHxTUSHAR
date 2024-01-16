/********************************************
*Author: TUSHAR SINGH , Topic:RECURSION
*Program to convert the numeric to alphabetic
*********************************************/

#include<iostream>
using namespace std;

void sayDigit(int num, string arr[] ){

    //base case
    if(num == 0){
        return ;
    }

    //processing
    int digit = num % 10;
    num = num / 10;
    

    //recursive realtion
    sayDigit(num , arr);


    //printing the number 
    cout<<arr[digit]<<" ";

}

int main(){

    string arrStore[10]={"zero","one","two","three","four","five",
                        "six","seven","eight","nine"};

    int num{};
    cout<<"enter the number :"<<endl;
    cin>>num;

    cout<<endl<<endl<<endl;
    
    sayDigit(num , arrStore);

    cout<<endl<<endl<<endl;

    return 0;
}