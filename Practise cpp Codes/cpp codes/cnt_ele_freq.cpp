/*Author: TUSHAR SINGH*/

/*In this code we are finding the elements with the highest and lowest freq*/

#include<bits/stdc++.h>
using namespace std;

//using the two loops- Brute force approach || T.C = O(n*n)
void count_freq_bruteForce(int arr[], int n){

    vector<bool>visited(n,false);

    int max_freq = 0 , min_freq = n;
    int max_ele = 0 , min_ele = 0;

    for(int i=0; i<n; i++){

        int cnt = 1;

        if(visited[i] == true) continue;

        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                cnt++;
            }
        }

        if(cnt > max_freq){
            max_freq = cnt;
            max_ele = arr[i];
        }

        if(cnt < min_freq){
            min_freq = cnt;
            min_ele = arr[i];
        }
    }

    cout<<"max ele is "<<max_ele<<" with freq of "<<max_freq<<endl;
    cout<<"min ele is "<<min_ele<<" with freq of "<<min_freq<<endl;

}

//using the unorder_map || T.C = O(n)
void count_freq(int arr[], int n){

    int max_freq = 0 , min_freq = n;
    int max_ele = 0 , min_ele = 0;

    unordered_map<int,int>mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto ele : mpp){

        int cnt = ele.second;
        int element = ele.first;

        if(cnt > max_freq){
            max_freq = cnt;
            max_ele = element;
        }

        if(cnt < min_freq){
            min_freq = cnt;
            min_ele = element;
        }
    }

    cout<<"max ele is "<<max_ele<<" with freq of "<<max_freq<<endl;
    cout<<"min ele is "<<min_ele<<" with freq of "<<min_freq<<endl;

}


int main(){

    int size;
    cout<<"enter the size of arr: ";
    cin>>size;

    int arr[size];
    cout<<"enter ele: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    //fun_call
    count_freq(arr , size);

    return 0;
}