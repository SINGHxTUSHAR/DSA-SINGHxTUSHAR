/********************************************************************
*Author : TUSHAR SINGH , Topic: REVERSE A STRING USING THE RECURSION
********************************************************************/

#include<iostream>
using namespace std;

void Reverse(string& str, int i, int j){

    //base case
    if(i > j){
        return ;
    }
    
    //processing
    swap(str[i], str[j]);
    i++;
    j--;

    //recursive call
    Reverse(str, i, j);
}

int main(){

    string name = "TUSHAR";

    Reverse(name , 0 , name.length()-1);
    cout<<endl<<endl;
    cout<<"reverse string is :"<<name<<endl;

    return 0;
}