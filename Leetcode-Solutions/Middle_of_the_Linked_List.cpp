//Author: TUSHAR SINGH

// Intuition:
// Since middle ele is always n/2 + 1, so simply calculate the length of linked list and traverse in list and check for middle ele.

// Approach:
// * Calculate the length of linked list.
// * middle ele will be n/2 + 1.
// * Traverse in linked list till head != NULL.
// * If the pos of curr ele is equal to the pos of midlle element return the current pos, and update the pos of ele by 1.
// * return head.

// Complexity:
// Time complexity: O(n)
// Since calculating the length of linked list and also traversing till middle ele.
// Space complexity: O(1)
// No extra auxiliary space is used.

// Code:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //calculating the length of list
    int size(ListNode* head){
        int n{};
        while(head != NULL){
            n++;
            head = head->next;
        }return n; 
    }
   
    ListNode* middleNode(ListNode* head) {

        int n = size(head);
        
        //middle element
        n = n/2 + 1;

        int i{};
        while(head != NULL){
            i++;
            //middle element return
            if(i==n) return head;
            head = head->next;
        }return head;
    }
};

//LINK: https://leetcode.com/problems/middle-of-the-linked-list/solutions/4837149/middle-of-the-linked-list-c-detail-explanation-optimal-cpp