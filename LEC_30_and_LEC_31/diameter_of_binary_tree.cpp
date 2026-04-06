// Problem Link : https://leetcode.com/problems/diameter-of-binary-tree/

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
//     int findmaxi(TreeNode* root , int &maxi){
//         if(root == NULL){
//             return 0 ;
//         }

//         int left = findmaxi(root -> left , maxi) ;
//         int right = findmaxi(root -> right , maxi) ;
        
//         // for finding other paths rather than passing from root
//         maxi = max(maxi , left+right) ;

//         return 1 + max(left , right) ;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         int maxi = -1 ;
//         findmaxi(root , maxi) ;
//         return maxi ;
//     }
// };