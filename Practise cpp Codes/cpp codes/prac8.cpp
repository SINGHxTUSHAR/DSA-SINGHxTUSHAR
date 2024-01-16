/*
* WAP TO PRINT THE PATTERN:
                            ****
                            ****
                            ****
                            **** 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE SIZE OF PATTERN: ";
    cin>>n;

    int i=0;
    while(i<n)     // loop for iteration
    {
        int j=0;
        while(j<n)      // loop for condition
        {
            cout<<"*";
            j++;
        }cout<<endl;   
        i++;
    }

    return 0;
}