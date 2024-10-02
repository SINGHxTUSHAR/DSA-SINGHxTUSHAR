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
    /* Approach-1 : uisng the parent pointer || T.C = O(n)*/
    // int solve(TreeNode* curr, TreeNode* parent){
    //     if(curr == NULL) return 0;

    //     //leaf node & parent->left child
    //     if(curr->left == NULL && curr->right == NULL){
    //         if(parent != NULL && parent->left == curr){
    //             return curr->val;
    //         }
    //     }

    //     // got the left & right leaf nodes
    //     int left = solve(curr->left, curr);
    //     int right = solve(curr->right, curr);

    //     return left + right;
    // }

    int solve(TreeNode* curr, bool isLeft){
        if(curr == NULL) return 0;

        // curr node if leaf node as well as left leaf
        if(curr->left == NULL && curr->right == NULL && isLeft == true){
            return curr->val;
        }

        // add all the left leaf nodes
        return solve(curr->left, true) + solve(curr->right, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        // return solve(root, NULL);

        return solve(root, false);
    }
};