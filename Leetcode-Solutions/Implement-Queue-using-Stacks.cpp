/*Author: TUSHAR SINGH*/

// Intuition:
// * Since, We know queue is FIFO. We have to use two stacks so that we can implement FIFO property as "LIFO(LIFO)==FIFO".
// * We will use two stacks input and output stack. We will push the elements into input stack and pop or peek the elements from the output stack for optimization and to reduce complexity.

// Approach:
// * Create two stacks: input and output
// * Input stack will be used to push() the elements. while the Output stack is used to perform pop() and peek() operation of queue.
// * We will directly push() the elements into input stack.
// * For pop(), we will firstly push the elements from input stack to output stack and then perform pop() and peek() operation.
// * If, output stack is empty them again push the remaining elements into output stack from input stack and find the peek() by using output.top();.
// * At last, We will check for empty() operation in both thge stacks. If both input and output stack are empty return ture, else return false.

// Complexity:
// Time complexity:O(n)
// Since, We are transfering elements from input stack to output stack, which have T.C of O(n). All the other operation of stack such as push(),pop(),peek(),empty() are done in O(1).

// Space complexity:O(1)
// Since, stack by using STL uses O(1) auxiliary space.

// Code:
class MyQueue {
public:
    
    //created two empty stacks
    stack<int>input, output;

    MyQueue() {
        
    }
    
    void push(int x) {
        //we will always push elements to input stack
        input.push(x);
    }
    
    int pop() {
        //we will pop elements from output stack as it contains oldest elements
        int val = peek();
        output.pop();
        return val; 
    }
    
    int peek() {
        //peek will be present in output stack
        if(output.empty()){
            //means output stack is empty
            while(input.empty() == false){
                output.push(input.top());
                input.pop();
            }
            //now all elements, if present are in output stack. return peek element
        }return output.top(); 
    }
    
    bool empty() {
        //if both input and output stack are empty return true else false
        return input.empty() && output.empty();  
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */



//LINK: https://leetcode.com/problems/implement-queue-using-stacks/solutions/4644542/implement-queue-using-stacksbeats-100coptimized-code/