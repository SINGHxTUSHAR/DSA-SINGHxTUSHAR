#include<iostream>
using namespace std;

int main(){
    
    int num{};

    cout<<"ENTER THE NUMBER :";
    cin>>num;

    int fact{1};

    while(num > 0){
        fact = fact * num;
        num--;
    }cout<<endl;

    cout<<"FACTORIAL FOR THE NUMBER IS :"<<fact<<endl;

    return 0;
}