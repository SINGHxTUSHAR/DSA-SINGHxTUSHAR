/*Author: TUSHAR SINGH*/

// Intuition:
// Diameter is the longest distance between any two nodes and since to get the longest distance between nodes , we have to consider the two leaf nodes and calculate their distances of left and right halfs.

// Approach:
// * Calculate the maximum left depth and right depth for each node.
// * Initialize the maxDiameter as 0 and return the max depth for the current node + 1 to its parent node.
// * By doing so, we don't have to recalculate the depth for each node.
// * Define the base case which is node==null then return 0.
// * calculate the leftDepth and rightDepth using recursion.
// * Then calculate the maxDiameter for the current node.
// * return the max depth + 1 to the parent node of teh current node.

// Complexity:
// Time complexity: O(n)
// We are traversing over all teh given nodes in the BT.
// Space complexity: O(n)
// Due to the recusive stack as we are calculating the maxDiameter for each node in BT.

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

    int maxDiameter{};

    int dfs(TreeNode* node){
        //base case
        if(node==nullptr) return 0;
        int leftDepth = dfs(node->left);  //left half of BT
        int rightDepth = dfs(node->right);  //right half of BT
        //calculating the maxDiameter for each node
        maxDiameter = max(maxDiameter, leftDepth+rightDepth);
        //returning the max length + 1 of the current node to the parent node
        return max(leftDepth, rightDepth) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxDiameter;
    }
};

//LINK: https://leetcode.com/problems/diameter-of-binary-tree/solutions/4790079/diameter-of-binary-tree-cpp-detail-explanation-optimized