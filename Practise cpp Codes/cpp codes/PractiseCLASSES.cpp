#include<iostream>
using namespace std;

class Employee{

    private:
    //data memebers
    int health;

    public:
    //data memebers
    int age;
    float salary;
    string name;

    //user defined constructor
    //parameterised constructor
    Employee(int health, int age, float salary, string name){
        cout<<endl<<endl;
        cout<<"constructor has been called"<<endl;
        cout<<"health is: "<<health<<" age is: "<<age<<" salary is: "<<salary<<"name is:"<<name<<endl<<endl;
    }

    //getter methods
    int get_health(){
        return health;
    }

    int get_age(){
        return age;
    }

    float get_salary(){
        return salary;
    }

    string get_name(){
        return name;
    }

    //setter methods
    void set_health(int health){
        //use of this pointer
        this->health = health;
    }
    void set_age(int age){
        this->age = age;
    }
    void set_salary(float salary){
        this->salary = salary;
    }
    void set_name(string name){
        this->name = name;
    }

    //user defined destructor
    ~Employee(){
        cout<<endl<<endl;
        cout<<"destructor has been called";
    }

};

int main(){

    int health{},age{};

    cout<<"enter the health :";
    cin>>health;

    cout<<"enter the age :";
    cin>>age;
    
    //static declaration for objects
    Employee e1 = Employee(100,15,10000,"deepanshu");
    Employee e2 = Employee(95,52,2500,"ayush");

    e1.set_health(health);
    e1.set_age(age);

    cout<<endl<<endl;
    cout<<"health is:"<<e1.get_health()<<endl;
    cout<<"age is:"<<e1.age<<endl;

    return 0;
}