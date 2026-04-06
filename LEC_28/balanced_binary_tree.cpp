// Problem Link :https://leetcode.com/problems/balanced-binary-tree/
//  /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int dfs(TreeNode* root){
//         if(root == NULL){
//             return 0 ;
//         }
//         int left = dfs(root -> left) ;
//         int right = dfs(root -> right) ;

//         return 1 + max(left, right) ;
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root == NULL){
//             return true ;
//         }

//         int left = dfs(root -> left) ;
//         int right = dfs(root -> right) ;

//         int dif = abs(left - right) ;

//         if(dif < 2 && isBalanced(root -> left) && isBalanced(root -> right)){
//             return true ;
//         }
//         return false ;
//     }
// };