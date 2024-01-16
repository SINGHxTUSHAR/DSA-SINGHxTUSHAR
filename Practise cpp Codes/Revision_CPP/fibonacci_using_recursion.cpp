#include<iostream>
using namespace std;

int fibonacci(int n){

    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    //recursive relation and recursive call
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    
    int n;
    
    cout<<endl;
    cout<<"ENTER THE NUMBER :";
    cin>>n;

    int ans = fibonacci(n);

    cout<<"THE Nth FIBONACCI NUMBER IS :"<<ans<<endl;

    return 0;
}