/* Author: TUSHAR SINGH */ 
// Intuition:
// * We will push the operand to the stack until we get an operation, then perform that operation on the top two elements of stack and then push the result back into stack. 
//   Repeat the above until we reach at the after end of the string.
// * To convert the string into integral values, we will use the "stringstream" class which is inbuilt.

// Approach:
// * We will create a stack using STL and iterate over it till it get at the after end.
// * If we get operand then we will convert that operand format from string to integer using "stringstream" class and push that data into stack.
// * If we found operator then as per the operator, We will perform required operation on top two elements of the stack.
// * Return the result of the operation on operands to the stack.
// * At last, return the top of stack which contains the result.

// Complexity:
// Time complexity:O(n)
// We are iterating over the string which contains n letters. Also we are using the stack operations which takes O(1) time to execute.

// Space complexity:O(1)
// Since, only O(1) auxiliary space is used to define the stack.

// Code:
class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int>st;
        for(auto x : tokens){
            //selecting operator
            if( (x=="+") || (x=="-") || (x=="/") || (x=="*") ){
                //extracting to two elements from stack
                int op2 = st.top(); st.pop();
                int op1 = st.top(); st.pop();

                //performing specific operation as per string
                if(x=="+") st.push(op1 + op2);
                if(x=="-") st.push(op1 - op2);
                if(x=="*") st.push(op1 * op2);
                if(x=="/") st.push(op1 / op2);

            }
            //pushing operands in stack
            else{
                //converting string to integral
                stringstream ss(x);
                int data;
                ss>>data;
                //pushing integral data to the stack from string
                st.push(data);
            }
        }return st.top();  
    }
};

//LINK: https://leetcode.com/problems/evaluate-reverse-polish-notation/solutions/4647937/evaluate-reverse-polish-notation-beats-100-c-most-optimized/?envType=daily-question&envId=2024-01-30
