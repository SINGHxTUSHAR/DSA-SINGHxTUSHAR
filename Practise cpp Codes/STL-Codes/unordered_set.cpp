/*Author: TUSHAR SINGH*/

#include<iostream>
using namespace std;
#include<unordered_set>


/*unordered_set in STL*/
int main(){

    unordered_set<int> s;

    for(int i=1; i<=10; i++){
        s.insert(i);
    }

   
    cout<<"elements in set is: ";
    //print elements of set
    for(auto k = s.begin(); k != s.end(); k++){
        cout<<*k<<" ";
    }cout<<endl;


    cout<<"=================================================="<<endl;
    //finding an element in unordered set
    int temp = 7;
    if(s.find(7) != s.end()){
        cout<<temp<<" is present in unordered set"<<endl;
    }


    cout<<"=================================================="<<endl;
   //deleting an element from unordered set
    s.erase(s.begin());
    cout<<"Elements after deleting first element is: ";
    for(auto m=s.begin(); m != s.end(); m++){
        cout<<*m<<" ";
    }cout<<endl;

   
   cout<<"=================================================="<<endl;
   //checking whether set is empty or not
    if(s.empty() == true) cout<<" set is empty";
    else cout<<"set is not empty";
    cout<<endl;


    cout<<"=================================================="<<endl;
    //prinint size of unordered set
    cout<<"size of the unordered set is: "<<s.size()<<endl;


    cout<<"=================================================="<<endl;
    cout<<"deleting 7 from the set: ";
    s.erase(7);
    for(auto m=s.begin(); m != s.end(); m++){
        cout<<*m<<" ";
    }cout<<endl;
    cout<<"=================================================="<<endl;


    s.clear();
    cout<<" size of unordered set after deleting all elements is: "<<s.size()<<endl;


    return 0;
}