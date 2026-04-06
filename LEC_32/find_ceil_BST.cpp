// Problem Link : https://www.geeksforgeeks.org/problems/implementing-ceil-in-bst/1

// class Solution {
//   public:
//     void ceil(Node* root , int x , int &ans){
//         if(root == NULL){
//             return ;
//         }
//         if(root -> data >= x ){
//             ans = min(ans , root -> data) ;
//             ceil(root -> left , x , ans) ;
//         }
//         if(root -> data < x){
//             ceil(root -> right , x , ans) ;
//         }
//     }
//     int findCeil(Node* root, int x) {
//         // code here
//         int ans = 1e5 + 1 ; 
//         ceil(root , x , ans) ; 
//         return (ans == 1e5 + 1) ? -1 : ans ;
//     }
// };
