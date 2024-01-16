#include<iostream>
using namespace std;

int main(){
    int num{};

    cout<<"ENTER THE NUMBER :";
    cin>>num;

    int sum{};

    while(num > 0){
        sum = sum + num;
        num--;
    }cout<<endl;

    cout<<"SUM FORM 1 TO NUMBER INCLUSIVE IS :"<<sum<<endl;

    return 0;
}