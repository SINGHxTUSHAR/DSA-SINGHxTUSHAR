class Solution {
public:
    // int sum=0;
    /*brute force approach*/
    // int countOfDigits(int num){
    //     int cnt{0};
    //     sum = 0; 

    //     while(num != 0){
    //         sum += num%10;
    //         num = num/10;
    //         cnt++;
    //     }return cnt;
    // }
    
    int addDigits(int num) {
        // while(countOfDigits(num) > 1){
        //     num = sum;
        // }
        // return sum;

        /*OPTIMAL APPROACH*/
        //UNDERSTAND THE MATHS BEHIND THIS !
        // 10 - (9*1 + 1) == 10^p = (9*c + 1) & p==c //
        if(num == 0) return 0;
        if(num%9 == 0) return 9;
        return num%9;
    }
};