// Author: TUSHAR SINGH

// Intuition:
// * If cycle exists in List then we weill never reach to the end(NULL).
// * We will imply use two pointers and if the pointer reaches to NULL that means cycle is not preasent, else cycle is present.

// Approach:
// * If the head is NULL or head->next is NULL that means their is no node or only one node, we will return false.
// * Define two pointers fast & slow.
// * Fast pointer will move two steps(nodes), while slow pointer move one step(node).
// * Design a loop till slow and fast catches each other.
// * If fast is equal to NULL or fast->next is NULL, means List has termination, then return false.
// * If the loop ends and no return is make, that means cycle exists in List, return true.

// Complexity:
// Time complexity: O(n) || O(logn)
// As we are traversing in list.
// Space complexity: O(1)
// No extra auxiliary space is used.

// Code:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //either list is empty or having only single node
        if(head==NULL || head->next==NULL) return false;
    
        ListNode *slow = head;
        ListNode *fast = head->next;
        
        /*If fast catches the slow pointer that means cycle exists*/
        while(slow != fast){
            //cycle is not present
            if(fast == NULL || fast->next == NULL) return false;
            //update pointers
            slow = slow->next;   //single step
            fast = fast->next->next;  //double step
        }return true;   //cycle exists
    }
};

//LINK: https://leetcode.com/problems/linked-list-cycle/solutions/4832689/linked-list-cycle-c-detail-explanation-optimal-cpp
