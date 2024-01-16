/*
* WAP TO CONVERT THE BINARY CODE TO DECIMAL
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i{},n{};
    float ans{};

    cout<<"ENTER THE BINARY CODE: ";
    cin>>n;

    while(n != 0)
    {
        int digit = n%10;     //taking the last digit
        if(digit == 1){
            ans = ans + pow(2,i);     //if it is 1 then multiply with pow(2,i)
        }

        n = n/10;      //update the number
        i++;
    }
    cout<<"Answer is: "<<ans<<endl;
    
    return 0;
}