//print only even number    

#include<iostream>
using namespace std;

int main(){

    int num{};

    cout<<"ENTER THE NUMBER :";
    cin>>num;

    while(num >= 0){
        if(num % 2 == 0){
            cout<<num<<endl;
        }
        num--;
    }

    return 0;
}