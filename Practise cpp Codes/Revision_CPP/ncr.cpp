//calculating the ncr OF COMBINATION

#include<iostream>
using namespace std;

int fact(int value){

    //base case
    if(value == 0 || value == 1){
        return 1;
    }
    return value*fact(value-1);
}

int cal_ncr(int n, int r, int a){

    int n_fact = fact(n);
    int r_fact = fact(r);  
    int a_fact = fact(a);
    
    int ans = (n_fact)/(r_fact * a_fact);

    return ans;
}

int main(){

    int n{}, r{};
    
    cout<<endl;
    cout<<"Enter the value of n and r respectively :";
    cin>>n>>r;

    int a = n - r;

    int ans = cal_ncr(n,r,a);

    cout<<"THE FINAL ANSWER FOR ncr IS :"<<ans<<endl;

    return 0;
}