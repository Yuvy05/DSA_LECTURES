// Problem Link : https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

// /*
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     // Constructor to initialize a new node
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     bool isLeaf(Node *root){
//         if(root -> left == NULL and root -> right == NULL ){
//             return true ;
//         }
//         return false; 
//     }
//     void leftTraverse(Node *root , vector<int> &ans){
//         Node* temp = root -> left ;
//         while(temp != NULL and !isLeaf(temp)){
//             if(temp -> left != NULL){
//                 ans.push_back(temp -> data) ;
//                 temp = temp -> left ;
                
//             }
//             else if(temp -> left == NULL and temp -> right != NULL){
//                 ans.push_back(temp -> data) ;
//                 temp = temp -> right ;
//             }
//         }
//     }
    
//     void leaf(Node *root , vector<int> &ans){
//         if(root == NULL){
//             return ;
//         }
//         if(isLeaf(root)){
//             ans.push_back(root -> data) ;
//         }
//         leaf(root -> left, ans) ;
//         leaf(root -> right, ans) ;
        
//     }
    
    
//     void rightTraverse(Node *root , vector<int> &ans){
//         Node* temp = root -> right ;
//         vector<int> d ;
//         while(temp != NULL and !isLeaf(temp)){
//             if(temp -> right != NULL){
//                 d.push_back(temp -> data) ;
//                 temp = temp -> right ;
//             }
//             else if(temp -> right == NULL and temp -> left != NULL){
//                 d.push_back(temp -> data) ;
//                 temp = temp -> left ;
//             }
//         }
//         reverse(d.begin() , d.end()) ;
//         for(auto i : d){
//             ans.push_back(i) ;
//         }
//     }
//     vector<int> boundaryTraversal(Node *root) {
//         // code here
//         vector<int> ans ;
        
//         if(!isLeaf(root))
//         ans.push_back(root -> data) ;
        
//         leftTraverse(root,ans) ;
//         leaf(root , ans) ;
//         rightTraverse(root , ans) ;
        
//         return ans ;
//     }
// };