/************************************
* practise for the default constrctor 
* understanding the concept of constructor list
*************************************/

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:

    int health;
    int age;
    string name;

    public:

    //getter
    int get_age(){
        return age;
    }
    string get_name(){
        return name;
    }
    
    //setter
    void set_age(int age){
        this->age = age;
    }
    void set_name(string name){
        this->name = name;
    }


    //prameterised constructor
    Student(string name, int age, int health){

        this->name = name;
                           //this is assignment not initialization
        this->age = age;   //this means that fir the members are created and have been assign the random value(garbage)
                           //and then assign to these values
        this->health = health;   
    }


    //this can be solved by using the constructor list
    Student(string name) :name{name} , health{10} , age{1560} {
        //constructor body

    }

};

int main(){
    
    //static object creation and passing the parameter to the constructor
    Student obj1("TUSHAR",15,65);

    //printing the result
    cout<<obj1.get_name()<<" "<<obj1.get_age();
    cout<<endl<<endl;

    Student obj2("HEMU");
    cout<<obj2.get_name()<<" "<<obj2.get_age();
    cout<<endl<<endl;

    return 0;
}