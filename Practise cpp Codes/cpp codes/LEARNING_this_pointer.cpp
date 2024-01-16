/********************************************
*UNDERSTANDING THE USE OF this POINTER IN C++
*********************************************/


#include<iostream>
using namespace std;

class Employee{

    public:
        //data memebers 
         string name;
         int age;
         float salary;
         
        //prametrised constructor
        Employee(string name, int age, float salary){

            this->name = name;
            this->age = age;
            this->salary = salary;
         }
        //method to display the values
        void display(){
            cout<<name<<" "<<age<<" "<<salary<<endl;
        }

};

int main(){

    cout<<"CHECKING THE USE OF THIS POINTER :"<<endl;

    //object creation statically
    Employee e1 = Employee("TUSHAR",21,120000);
    Employee e2 = Employee("HEMU",20,180000);

    e1.display();
    e2.display();

    return 0;
}