//check for the prime number

#include<iostream>
using namespace std;

int main(){

    int num{};

    cout<<"ENETR THE NUMBER :";
    cin>>num;
/*
    int n = 2;

    while(n < num){
        if(num % n == 0){
            cout<<"NOT PRIME"<<endl;
            break;
        }
        else{
            cout<<"PRIME";
            break;
        }
        n++;
    }

*/
if(num == 1){
    cout<<"PRIME"<<endl;
    }

for(int i = 2; i<num; i++){
    if(num % i == 0){
        cout<<"NOT PRIME"<<endl;
        break;
    }
    else{
        cout<<"PRIME"<<endl;
        break;
    }
}
    return 0;
}