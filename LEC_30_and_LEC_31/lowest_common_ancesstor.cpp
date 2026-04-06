// Problem Link : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* lcs(TreeNode* root, TreeNode* p, TreeNode* q){

//         if(root == NULL)    return NULL ;
//         else if(root == p)    return root ;
//         else if(root == q)    return root ;

//         TreeNode* left = lcs(root -> left , p , q) ;
//         TreeNode* right = lcs(root -> right , p , q) ;

//         if(left != NULL and right != NULL) return root ;
//         if(left == NULL and right != NULL) return right ;
//         if(right == NULL) return left ;
//         return NULL ;
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         return lcs(root , p , q) ;
//     }
// };