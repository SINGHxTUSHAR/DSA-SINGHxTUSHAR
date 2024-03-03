/*Author: TUSHAR SINGH*/

// Intuition:
// Simple approach could be, just traverse to the node which needed to del and simply del it and update the L.L and return the head of the L.L.

// Approach:

// Approach-1: TWO-PASS
// * Calculate the length of the L.L
// * Find the pos of the node which needed to del by formula : Length - n - 1.
// * Cover the edge case, which is if we need to del the head.
// * Traverse till the node and store the curr node to temp, Update the L.L
// * Del the temp node, and return the head.

// Approach-2: ONE-PASS
// * Create a dummy node pointing to head.
// * Create p & q , two pointers pointing to head.
// * Move q to the pos just before the pos of the node which needed to del, which is n.
// * Now, shift p & q simultaneously till q reaches at the end of L.L
// * Store the curr->next to temp.
// * Update the L.L, and del the temp node.
// * Return the dummy node.

// Complexity:
// Time complexity: O(n)
// Since we are Performing all operation in one pass
// Space complexity: O(1)
// No, extra auxiliary space is used.

//NOTE: CMT OUT, ONE APPROACH

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        /*Approach-1 || using two-pass || T.C = O(n + n)*/
        int length = 0;
        ListNode* curr = head;
        
        // Calculate the length of the linked list
        while (curr != nullptr) {
            length++;
            curr = curr->next;
        }

        // Find the position to remove
        int traverseTill = length - n - 1;
        int i = 0;
        curr = head;

        // If the head needs to be removed
        if (traverseTill == -1) {
            head = head->next;
            delete curr;
            return head;
        }

        // Traverse to the node before the one to be removed
        while (i < traverseTill) {
            curr = curr->next;
            i++;
        }

        // Remove the nth node from the end
        ListNode* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;

        return head;

        /**********************************************************************************************/


        /*Approach-2 || One-pass || T.C = O(n)*/
        //dummy node to cover the edge case
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        //two pointer
        ListNode *p = dummy, *q = dummy;
        
        //placing q at the pos just before the pos of node which need to del
        int i=0;
        while(i<n){
            q = q->next;
            i++;
        }
      
        while(q->next != nullptr)
            p = p->next, q = q->next;

        //storing the node which has to be del
        ListNode *temp = p->next;
        //updating L.L
        p->next = p->next->next;
        delete(temp);

        return dummy->next;
    }
};

//LINK: https://leetcode.com/problems/remove-nth-node-from-end-of-list/solutions/4818058/remove-nth-node-from-end-of-list-c-detail-explanation-optimal-cpp