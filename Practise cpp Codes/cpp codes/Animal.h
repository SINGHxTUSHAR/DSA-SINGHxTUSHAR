//USER DEFINED HEADER FILE

//UNDERSTANDING THE CONCEPT OF INCLUDE GUARDS:

// Checks if _ANIMALS IF DECLARED
#ifndef _ANIMALS_ //name should be unique and it is good practise to start and end with an underscore
  
// Defines _ANIMALS_ if above
// conditions fails
#define _ANIMALS_  //same as above name declared
  
#include <iostream>
#include <string>
using namespace std;
  
// Animal Class
class Animal {
    string name, color, type;
  
public:
    // Function to take input to
    // member variable
    void input()
    {
        name = "Dog";
        color = "White";
    }
  
    // Function to display the
    // member variable
    void display()
    {
        cout << name << " is of"
             << color << endl;
    }
};
#endif // _ANIMALS_