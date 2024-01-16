#include<iostream>
using namespace std;

int main(){

    int num{};

    cout<<"ENTER THE NUMBER :";
    cin>>num;

    while(num >= 0){
        cout<<num<<endl;
        num--;
    }

    return 0;
}