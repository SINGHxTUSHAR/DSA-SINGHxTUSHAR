#include<iostream>
using namespace std;

int main(){

    int a{0}, b{1}, sum{0};
    int n;

    cout<<"ENTER THE NUMBER :";
    cin>>n;

    cout<<endl;

    cout<<"THE FIBONACCI SERIES UPTO THE GIVEN NUMBER IS :";

    cout<<a<<" "<<b<<" ";

    for(int i=1; i<n; i++){
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }cout<<endl;

    return 0;
}