#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x{0};
    cin>>n;

    string ch;

    for(int i=0; i<n; i++){
        cin>>ch;
        if(ch=="x++" || ch=="++x") x++;
        else x--;
    }cout<<x;
    return 0;
}