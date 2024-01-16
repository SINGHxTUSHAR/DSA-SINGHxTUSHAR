/*********************************************
* WAP TO CHECK FOR VALID TRIANGLE
* AUTHOR-TUSHAR SINGH , DATE-27-02-23
**********************************************/


#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"ENTER THE VALUSE OF A,B,C RESPECTIVELY:"<<endl;
    cin>>a>>b>>c;

    if(a+b>c)                  
    {
        if(b+c>a)
        {
            if(a+c>b)
            cout<<"THIS IS A VALID TRIANGLE";

            else
            cout<<"INVALID TRIANGLE";
        }
        else
        cout<<"INVALID TRIANGLE";
    }
    else
    cout<<"INVALID TRIANGLE";
    
    return 0;

}