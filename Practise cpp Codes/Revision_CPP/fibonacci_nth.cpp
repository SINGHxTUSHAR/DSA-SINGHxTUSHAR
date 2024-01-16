#include<iostream>
using namespace std;

int fibonacci(int n){

    int a{0}, b{1}, sum{0};

    if(n == 0){
       return 0;
    }

    for(int i=2; i<=n; i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    return b;
}

int main(){

    
    int n;

    cout<<"ENTER THE NUMBER :";
    cin>>n;

    cout<<endl;

    int ans = fibonacci(n);
    
    cout<<"THE Nth FIBONACCI NUMBER IS :"<<ans<<endl;

    return 0;
}