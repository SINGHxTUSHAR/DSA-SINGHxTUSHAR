/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

//fun to check for palindrome of a str using STL
void using_stl_palindrome(string str){

    string rev_str = str;

    //using the reverse algo from the STL
    reverse(rev_str.begin(),rev_str.end());

    if(rev_str == str) cout<<"palindrome"<<endl;

    else cout<<"not palindrome"<<endl;

}

//fun to check for palindrome using two pinter approach
void using_twoPointer(string str){
    int st = 0;
    int en = str.length()-1;

    for(int i=0; i<str.length()/2; i++){

        if(str[st] == str[en]){
        st++;
        en--;
        }
    }if(st == str.length()/2)  cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
}

//fun to check for palindrome in str using recursive calls
bool using_recursion(int start, string str){

    //base case
    if(start>=str.length()/2) return true;

    if(str[start] != str[str.length()-start-1]) return false;

    return using_recursion(start+1,str);
}

int main(){
    // string str = "TUSHAR";
    string str;
    
    //taking input from the user
    cout<<"Enter the string: ";
    getline(cin,str);
    
    // using_stl_palindrome(str);

    // using_twoPointer(str);

    bool ans = using_recursion(0,str);
    if(ans) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;

    return 0;
}