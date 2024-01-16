#include<iostream>
using namespace std;

class Student{

    public:

    //property
    string name;
    int age;

    //constructor
    Student(){
        cout<<"constructor has been called :"<<endl;
    }


};

int main(){

    cout<<"checking phase 1:"<<endl;

    //object creation statically
    Student obj1;

    //object creation dynamically
    Student *obj2 = new Student();

    cout<<"checking phase 2:"<<endl;


    return 0;
}