// Problem Link : https://www.geeksforgeeks.org/problems/floor-in-bst/1

// /*
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     void ceil(Node* root , int x , int &ans){
//         if(root == NULL){
//             return  ;
//         }
//         if(root -> data <= x){
//             ans = max(ans , root -> data) ;
//             ceil(root -> right , x , ans) ;
//         }
//         if(root -> data > x){
//             ceil(root -> left , x , ans) ;
//         }
//     }
//     int floor(Node* root, int x) {
//         // code here
//         int ans = - 1 ;
//         ceil(root , x , ans) ;
//         return ans ;
//     }
// };