#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int>q;

    q.push(15);
    q.push(45);
    q.push(100);

    cout<<"size of the queue is: "<<q.size()<<endl;

    q.pop();  //15

    cout<<"size of the queue is: "<<q.size()<<endl;

    

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }


    cout<<"========================================"<<endl;

    cout<<"first element of the queue is: "<<q.front()<<endl;

    cout<<"last element in the queue is: "<<q.back()<<endl;



}