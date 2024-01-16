/**************************
*USE OF VECTOR
**************************/


#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector <int> num {10,20,30,40};
    int i;
    for(i=0;i<5;i++)
    {
        num.push_back(i);
    }
    num.push_back(50);

    return 0;

}