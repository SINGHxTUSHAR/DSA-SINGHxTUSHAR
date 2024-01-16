/*
* CHECK FOR LOWER CASE AND UPPER CASE
*/


#include<iostream>
using namespace std;

int main()
{
    char ch;
    
    cout<<"ENTER THE CHARACTER: ";
    cin>>ch;

    if(ch>=65 && ch<=90)
    cout<<"UPPER CASE"<<endl;

    else if(ch>=97 && ch<=122)
    cout<<"LOWER CASE"<<endl;

    else 
    cout<<"WRONG CHAR (OUT OF RANGE)";

    return 0;
}