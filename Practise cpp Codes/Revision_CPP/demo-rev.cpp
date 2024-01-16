#include<iostream>
#include<math.h>
using namespace std;

//this lib includes all the necessary lib at once
// #include<bits/stdc++.h>



// int main(){

//     int a=0;
    
//     cout<<"enter your fav number"<<"\n";
//     cin>>a;

//     cout<<endl;
//     cout<<"your fav number is "<<a<<endl;

//     return 0;
// }




// int main(){

//     int age=0;
    
//     std::cout<<"enter your age"<<"\n";
//     std::cin>>age;

//     if(age<18){
//         int req_age = 18;
//         int current_age = age;
//         int temp = req_age - current_age;
//         std::cout<<"you are not eligible for voting, please come after "<<temp<<" years"<<"\n";
//     }
//     else if(age>100 || age<1){
//         std::cout<<"wrong input"<<"\n";
//     }
//     else{
//         std::cout<<"you are eligible for voting";
//     }

//     return 0;
// }




// int main(){

//     int total_marks=0;

//     cout<<"enter your total marks: "<<"\n";
//     cin>>total_marks;

//     if(total_marks>91) cout<<"Grade is A"<<"\n";

//     else if(total_marks<=91 && total_marks>81) cout<<"Grade is B"<<"\n";

//     else if(total_marks<=81 && total_marks>71) cout<<"Grade is C"<<"\n";

//     else if(total_marks<=71 && total_marks>55) cout<<"Grade is D"<<"\n";

//     else cout<<"Phad le bhai tu fail hai !";

//     return 0;

// }


// int main(){

//     int day_number = 0;

//     cout<<"enter the day :"<<"\n";
//     cin>>day_number;

//     switch (day_number)
//     {
//     case 1:
//         cout<<"MONDAY";
//         break;

//     case 2:
//         cout<<"TUESDAY";
//         break;


//     case 3:
//         cout<<"WEDNESDAY";
    
//     default:
//         cout<<"INVALID";
//         break;
//     }

//     return 0;
// }


// int main(){

//     for(int i=0; i<10; i++){
//         cout<<"Hello, my name is TUSHAR"<<"\n";
//     }
//     return 0;
// }


/*Factorial of N number*/

// int main(){

//     int n=0;
//     int fact=1;

//     cout<<"enter the number for factorial: ";
//     cin>>n;

//     int temp = n;

//     while(n>0){
//         fact *= n;
//         n--;
//     }

//     cout<<"factorial of "<<temp<<" is "<<fact;

//     return 0;
// }



// int main(){

//     int numbers[] = {1,2,3,4,5,6,7,8,9,10};
//     int target= 7;

//     for(int num : numbers){
//         if(num==target){
//             cout<<"target is found which is "<<num<<endl;
//             break;
//         }
//         cout<<"checking no."<<num<<endl;
//     }

//     cout<<"========================================="<<endl;
//     for(int num : numbers){
//         if(num % 2 == 0){
//             continue;
//         }
//         cout<<"odd number is: "<<num<<endl;
//     }
//     return 0;

// }



/*function to calculate the areas of circle and rectangle*/

// double calculate_rect_area(double height_rect , double breadth_rect){

//     double area = height_rect * breadth_rect;

//     return area;
// }

// double calculate_cir_area(double radius_cir){

//     double area = 3.14 * pow(radius_cir , 2);

//     return area;
// }


// int main(){

//     double height_rect = 0;
//     double breadth_rect = 0;

//     double radius_cir = 0;

//     cout<<"enter the height and breadth of the rectangle: ";
//     cin>>height_rect>>breadth_rect;

//     cout<<"enter the radius of circle: ";
//     cin>>radius_cir;

//     double rect_area = calculate_rect_area(height_rect,breadth_rect);

//     double cir_area = calculate_cir_area(radius_cir);


//     cout<<"area of rectangle is :"<<rect_area<<endl;

//     cout<<"area of circle is :"<<cir_area<<endl;

//     return 0;
// }



// int main(){

//     int myarray[] = {1,2,3,4,5,6,7,8,9,10,12};

//     int size  = sizeof(myarray)/sizeof(myarray[0]);

//     cout<<size;
// }


// int main(){

//     string s;

//     cout<<"enter you string"<<endl;
//     getline(cin, s);
//     cout<<"your name is: "<<s;

//     return 0;
// }

// int main(){

//     char ch;

//     cout<<"put your grade:"<<endl;
//     cin>>ch;

//     cout<<"grade is :"<<ch;
//     return 0;
// }

// int main(){

//     int myarr[5];

//     int size = sizeof(myarr)/sizeof(myarr[0]);

//     cout<<"enter the array elements :";

//     for(int i=0; i<size; i++){
//         cin>>myarr[i];
//     }

//     for(int i=0; i<size; i++){
//         cout<<myarr[i]<<" ";
//     }
//     return 0;
// }


// int main(){

//     int my2d_arr[3][3];

//     cout<<"enter the elements in row wise:";

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>my2d_arr[i][j];
//         } 
//     }
//     return 0;
// }


