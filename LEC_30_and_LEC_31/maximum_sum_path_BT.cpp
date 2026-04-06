// Problem Link : https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

// /**
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
//     int mxpath(TreeNode* root , int &ans){

//         if(root == NULL)return 0;

//         int lsum = max(0 , mxpath(root-> left , ans)) ;
//         int rsum = max(0 , mxpath(root -> right , ans)) ;

//         int csum = root -> val  + lsum + rsum ;

//         ans = max(ans , csum) ;

//         return max(lsum , rsum) + root -> val ;

//     }
//     int maxPathSum(TreeNode* root) {
//         int ans = INT_MIN ;
//         int val = mxpath(root , ans) ;
//         return ans ;
//     }
// };