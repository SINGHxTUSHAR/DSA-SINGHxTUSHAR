/*Author: TUSHAR SINGH*/

// Intuition:
// * This question is similar to finding the next greatest element in an array.
// * We will create an ans vector which is initialized with zeros to store the final answer and a stack to check the condition. If stack contains element less then the current element then pop() it and push() the current element,
// * else push current element and calculate the difference of their indices.
// * calculate the number of days by just simply subtracting the position of top element which satisfied the condition with the current element of an array.

// Approach:
// * Create a vector to store the ans and initialized it with the zeros.
// * Create a stack and start pushing elements from the end of the array.
// * Check if the top element of stack less then the current element of array the pop the top element and repeat till find larger element.
// * Once, we have found element larger then the top element of the stack, calculate the difference of their indices which will be number of days.
// * And push that value into the ans vector.
// * Repeat the above steps till the arr is traversed.

// Complexity:
// Time complexity:O(n)
// Since we are traversing the array which can contain n elements.

// Space complexity:O(n)
// As we are ppushing all elements into the stack and performing pop() as well. Since their are n elements and each operation takes O(1) which get in total of n elements.

// Code:
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {


        int n = temperatures.size();
        //initializing all elements as zero
        vector<int>ans(n, 0); 
        stack<int>st{};
        
        //iterating in arr from last
        for(int i = n-1; i>=0; --i){
            //removing the smaller element compare to current index element
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
			
            //calculating the difference of indices for the required condition
            if(!st.empty())
                ans[i] = st.top()-i; 
            
            //pushing current element
            st.push(i);
        }
        
        return ans;
    }
};

// LINK: https://leetcode.com/problems/daily-temperatures/solutions/4655188/daily-temperaturescppbeats-93optimized-code
