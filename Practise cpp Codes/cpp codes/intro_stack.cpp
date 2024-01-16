#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creating stack
    stack<int> s;

    //push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //pop operation
    s.pop();

    //empty operation
    bool ans = s.empty();

    //cout<<boolalpha is used to convert the 0,1 into true or false
    cout<<boolalpha;
    cout<<ans<<endl;

    //empty or not
    if(s.empty()){
        cout<<"STACK IS EMPTY"<<endl;
    }
    else{
        cout<<"STACK IS NOT EMPTY"<<endl;
    }

    //top operation
    cout<<"TOP ELEMENT IS :"<<s.top()<<endl;

    s.pop();
    s.pop();
    s.pop();

    //top operation
    cout<<"TOP ELEMENT IS :"<<s.top()<<endl;
    
    //size of stack is
    cout<<"SIZE OF STACK IS :"<<s.size()<<endl;

    return 0;
}