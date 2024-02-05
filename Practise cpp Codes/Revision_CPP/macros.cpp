#include<bits/stdc++.h>
// #include<string>
// #include<iostream>
using namespace std;

//template with single class/typename
template<typename T>
T Min(T a, T b){
    return((a<b)?a:b);
}
//template with multi class
template<typename T1, typename T2>
void func(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}


int main(){

    cout<<Min<int>(6,9)<<endl;
    cout<<Min(4,6)<<endl;
    cout<<Min<char>('A','Z')<<endl;

    cout<<func<int,int>(149,-89)<<endl;

    return 0;

}