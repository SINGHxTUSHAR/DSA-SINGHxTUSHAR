/*Author: TUSHAR SINGH*/

#include<iostream>
using namespace std;

//fun to print and count the number of digit
void count_digit(int digit, int count){
    int value = digit;
    int temp = 0;
    for(int i=0; digit != 0; i++){
        temp = digit%10;
        cout<<"last no of digit is: "<<temp<<endl;
        count++;
        digit = digit/10;

    }
    cout<<"========================================================="<<endl;
    cout<<"Total number of digit in "<<value<<" is "<<count<<endl;
    cout<<"========================================================="<<endl;
}

//fun to reverse a number
void rev_num(int digit){
    int num = 0;
    int temp = 0;
    while(digit!=0){
        temp = digit%10;
        num = num*10+temp;
        digit = digit/10;
    }
    cout<<"Reverse number is: "<<num<<endl;
    cout<<"========================================================="<<endl;
}

int main(){
    int digit;
    int count=0;

    cout<<"Enter your digit: ";
    cin>>digit;
    
    //fun call
    count_digit(digit,count);

    rev_num(digit);

    return 0;
}