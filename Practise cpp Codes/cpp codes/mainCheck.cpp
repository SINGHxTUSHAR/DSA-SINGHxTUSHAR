// C++ program to illustrate the
// include guards also know as the macro gaurad in c++

/*
*Include guards ensures that compiler will process this file only once, no matter how many times it is included. Include guards are just series of preprocessor directives that guarantees file will only be included once.
Preprocessors used:

#ifndef: if not defined, determines if provided macros does not exists.
#define: Defines the macros.
#endif: Closes off #ifndef directive.
The block of statements between #ifndef and #endif will be executed only if the macro or the identifier with #ifndef is not defined.

syntax:

#ifndef ANIMAL(Any word you like but unique to program)
#define ANIMAL(same word as used earlier)

class Animal {
    // Code
};

#endif
*/

#include "Animal.h"
#include "Dog.h"
#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    // Object of Dog class in
    // "Dog.h" header file
    Dog a;
  
    // Member Function Call
    a.dog_input();
    a.dog_display();
  
    return 0;
}