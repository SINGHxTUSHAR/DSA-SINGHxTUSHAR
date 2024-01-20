/*Author: TUSHAR SINGH*/
#include<iostream>
#include<stack>
using namespace std;

// fun to print the elements of stack
void print_stack(stack<int> s1){
    stack<int> s2 = s1;

    while(!s2.empty()){
        cout<<s2.top()<<"\n";
        s2.pop();
    }cout<<endl;
}

//fun to check for empty of stack
void check_empty(stack<auto> s){

    if(s.empty() != false) cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
}

/*stack in STL*/
int main(){

    stack<int> s;

    s.push(110);
    s.push(456);
    s.push(55);
    cout<<"Size of the stack is: "<<s.size()<<endl;
    cout<<"=============================="<<endl;
    
    //delete every element from the stack
    cout<<"deleting stack elements"<<endl;
    cout<<"=============================="<<endl;
    while(s.size() != 0){
        s.pop();

    }

    //pushing new elements into stack
    for(auto j=1; j<11; j++){
        s.push(j);
    }
    
    //print the elements in stack
    cout<<"New elements of an stack are: "<<endl;
    print_stack(s);
    cout<<"=============================="<<endl;


    cout<<"Top element of stack is: "<<s.top()<<endl;
    cout<<"=============================="<<endl;

    //checking whether stack is empty or not
    check_empty(s);
    cout<<"=============================="<<endl;

    //print elements
    cout<<"Elements in stack are: "<<endl;
    print_stack(s);
    cout<<"=============================="<<endl;

   //delete every element from the stack
   cout<<"deleting stack"<<endl;
    while(s.size() != 0){
        s.pop();

    }

    check_empty(s);
    cout<<"=============================="<<endl;

    return 0;
}