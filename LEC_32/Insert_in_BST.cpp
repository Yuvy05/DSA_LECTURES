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
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         TreeNode* n = new TreeNode(val) ;
//         TreeNode* curr = root ;
//         TreeNode* prev ;
//         if(root == NULL){
//             return n ;
//         }
//         while(curr != NULL){
//             prev = curr ;
//             if(curr -> val < val){
//                 curr = curr -> right ;
//             }
//             else if(curr -> val > val){
//                 curr = curr -> left ;
//             }
//         }
//         if(prev -> val < val){
//             prev -> right = n ;
//         }
//         else{
//             prev -> left = n ;
//         }
//         return root ;
//     }
// };