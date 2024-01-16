#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int>dq;

    dq.push_front(10);
    dq.push_back(20);

    dq.push_front(100);
    dq.push_back(990);

    cout<<"first element is: "<<dq.front()<<endl;

    cout<<"last element is: "<<dq.back()<<endl;

    cout<<"===================================="<<endl;

    dq.pop_back();
    cout<<"last element is: "<<dq.back()<<endl;

    dq.pop_front();
    cout<<"first element is: "<<dq.front()<<endl;

    cout<<"=====================================";

    cout<<boolalpha<<endl;
    cout<<"empty or not :"<<dq.empty()<<endl;


    return 0;
}