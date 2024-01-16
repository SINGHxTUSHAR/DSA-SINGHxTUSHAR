/*
* WAP TO CONVERT DECIMAL TO BINARY
*/


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float ans{0};
    int i{0},n;

    cout<<"ENTER THE NUMBER: ";
    cin>>n;

    while(n != 0){
        int bit = n&1;           //to check each bit of number
        ans = (bit * pow(10, i)) + ans;           //storing each bit of number

        n = n >> 1;       //right shift by 1 bit
        i++;
    }
    cout<<"Answer is: "<<ans<<endl;
}
