//stack implementation using array

#include<iostream>
using namespace std;

class Stack{

    public:
    //data memebers
    int *arr;
    int top;
    int size;

    //constructor
    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    //push opertion
    void push(int element){
        //size available or not
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"STACK OVERFLOW"<<endl;
        }
    }

    //pop operation
    void pop(){
        //element exists or not
        if(top >= 0){
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW"<<endl;
        }
    }

    int peek(){
        //element exists in stack or not
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"STACK IS EMPTY"<<endl;
        }
    }
    
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"TOP ELEMENT IS :"<<st.peek()<<endl;

    st.pop();
    st.pop();
    st.pop();

    cout<<"TOP ELEMENT IS :"<<st.peek()<<endl;
    
    // cout<<boolalpha;
    // cout<<st.isEmpty()<<endl;

    st.pop();

    st.pop();
    
    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    // cout<<"TOP ELEMENT IS :"<<st.peek()<<endl;

    return 0;
}