#include<iostream>
using namespace std;

int main(){
    int num{};

    cout<<"ENTER THE NUMBER :";
    cin>>num;

    if(num % 2 == 0){
        //num is even
        cout<<"NUMBER IS EVEN"<<endl;
    }
    else{
        cout<<"NUMBER IS ODD"<<endl;
    }
    
    return 0;
}