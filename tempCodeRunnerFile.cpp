#include<bits/stdc++.h>
using namespace std;

void printStr(string str, int i){
    if(i >= str.length()){
        return;
    }
    
    printStr(str, i+1);
    cout<<str[i];
}

// TC: O(n)
// SC: O(n)
int main(){
    string str;

    cin>>str;

    printStr(str, 0);
}