#include<iostream>
#include<stack>
using namespace std;

int main(){

    cout<<endl;

    string str = "TUSHAR SINGH";

    stack<char> s;

    //pushing the elements in the stack
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";
    
    //fetching the element from the stack and pushing to the ans string
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    
    cout<<"Original string is : "<<str<<endl;
    cout<<"Reverse string is :"<<ans<<endl;

    return 0;

}
