#include <iostream>
// including another class using the preprocessor directive
//#include "studentCLASS.cpp"
using namespace std;

class Account
{
    private:
    int health = 145;
    
    public:
    // properties
    char level = 'F';

    //GETTER METHOD
    int get_health(){
        return health ;
    }
    //getter
    char get_level(){
        return level;
    }
    //setter
    void set_level(char l){
        level = l;
    }

    //SETTER METHOD
    void set_health(int h){
        health = h;
    }

};

int main()
{

    // object for the class Account
    Account a;
    //object declaration is dynamic
    Account *acc2 = new Account;

    cout<<endl<<endl;


    //printing using the object 1st
    //a.set_health(55);
    a.set_level('A');
    
    cout<<"health :"<<a.get_health()<<endl;
    cout<<"level :"<<a.level;
    cout<<endl<<endl;


    

    //printing using the object 2nd with using dot operator notation 
    (*acc2).set_health(80);
    (*acc2).set_level('B');

    cout<<"health :"<<(*acc2).get_health()<<endl;
    cout<<"level :"<<(*acc2).level;
    cout<<endl<<endl;

    

    //printing using the object 2nd with using arrow notation

    acc2->set_health(90);
    acc2->set_level('C');

    cout<<"health :"<<acc2->get_health()<<endl;
    cout<<"level :"<<acc2->level;
    cout<<endl<<endl;

    





    /*
    
    cout<<"health is :"<<acc1.get_health()<<endl;
    acc1.set_health(89);
    cout<<"health is :"<<acc1.get_health();


    //initializing the values to the data members for the class Account
    cout << endl<< endl;
    //acc1.health = 70;
    //acc1.str = "ABC";

    //cout<<"health :"<<(acc1.health)<<" and name is :"<<(acc1.str)<<endl;


    // object for the class Students
    Students std1;

    // printing the size of the class
    cout << endl<< endl;
    cout << "SIZE FOR THE CLASS ACCOUNT :" << sizeof(acc1);
    cout << endl<< endl;
    cout << "SIZE FOR THE CLASS STUDENTS :" << sizeof(std1);
    cout << endl<< endl;

    string xyzw = "TUSHAR";
    cout << "size of str :" << sizeof(xyzw);
    
    */

    return 0;
}