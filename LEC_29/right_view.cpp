// Problem LInk : https://leetcode.com/problems/binary-tree-right-side-view/description/

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
//     vector<int> rightSideView(TreeNode* root) {
//         queue<TreeNode*> q ;
//         if (root == NULL) return {} ; 
//         q.push(root) ;
//         vector<int> ans ;
//         while(q.size()){
//             int sz = q.size() ;
//             for(int i = 0 ; i < sz ; i++){
//                 TreeNode* curr = q.front() ;

//                 q.pop() ;
                
//                 if(curr != NULL and i == sz - 1) ans.push_back(curr -> val)  ;

//                 if(curr -> left != NULL){
//                     q.push(curr -> left) ;
//                 }
//                 if(curr -> right != NULL){
//                     q.push(curr -> right) ;
//                 }
//             }
//         }
//         return ans ; 
//     }
// }; 