/*Author: TUSHAR SINGH*/
#include<bits/stdc++.h>
using namespace std;


//fun to print the element of queue
void print_queue(queue<int> q1){
     while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
     }cout<<endl;
}

//fun to check whether queue is empty or not
void check_empty(queue<int> q){
    queue<int>q2 = q;
    
    if(q2.empty() != false) cout<<"queue is empty"<<endl;
    else cout<<"queue is not empty"<<endl;
}

//fun to delete the queue
void del_queue(queue<int> &q){

    while(!q.empty()){
        q.pop();
    }cout<<endl;
}

/*QUEUE-STL*/
int main(){

    queue<int> q;

    for(int i=0; i<10; i++){
        q.push(i);
    }

    cout<<"The first element of queue is: "<<q.front()<<endl;
    cout<<"The last element of queue is: "<<q.back()<<endl;

    cout<<"====================================================="<<endl;
    cout<<"Size of the queue is: "<<q.size()<<endl;

    cout<<"====================================================="<<endl;
    cout<<"Elements in queue is: ";
    print_queue(q);
    cout<<"====================================================="<<endl;


    cout<<"checking whether queue is empty or not: "<<endl;
    check_empty(q);
    cout<<"====================================================="<<endl;

    cout<<"deleting queue: ";
    del_queue(q);
    cout<<"====================================================="<<endl;


    check_empty(q);


    return 0;
}