/*Author: TUSHAR SINGH*/

// Intuition:
// We will simply traverse over the tree and compare their nodes and structure, and if they are same then return true else return false.

// Approach:
// * Traverse over the tree in DFS manner.
// * If the current node is same continue traversing till the end.
// * If the value of node or structure of tree is not same, then return false.
// * Solve for one and then call recursion for left and right half of tree.

// Complexity:
// Time complexity: O(min(m,n))
// Where m & n are the nodes in p & q respectively.
// Space complexity: O(min(h1,h2))
// Where h1 & h2 are the heights of the tree of p & q respectively.

// Code:
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base condition
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        
        //recursive call
        if(p->val == q->val){
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }return false;   //p & q are not same
    }
};

//LINK : https://leetcode.com/problems/same-tree/solutions/4784946/same-tree-detail-explanation-beats-100-cpp-optimized