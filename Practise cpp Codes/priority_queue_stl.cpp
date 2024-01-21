/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

//fun to print the element of max heap
void printpriorityqueue(priority_queue<int> pq){
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}

//fun to print the min heap
void print_min_heap(priority_queue<int, vector<int>, greater<int>>pq_min){
    while(!pq_min.empty()){
        cout<<pq_min.top()<<"\n";
        pq_min.pop();
    }
}

/*Priority Queue*/
int main()
{

    //MAX HEAP
    priority_queue<int> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);
    
    cout<<"The elements of the priority queue in decreasing order are:"<<endl;
    printpriorityqueue(pq);
    cout<<"==========================================================="<<endl;

    //generic operations
    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    pq.pop();
    printpriorityqueue(pq);

    cout<<"==========================================================="<<endl;

    //MIN HEAP
    priority_queue<int, vector<int>, greater<int>>pq_min;
    for(int i=11;i<=19;i=i+2)
    pq_min.push(i);

    cout<<"The elements of the priority queue in increasing order are :"<<endl;
    print_min_heap(pq_min);


   return 0;
}