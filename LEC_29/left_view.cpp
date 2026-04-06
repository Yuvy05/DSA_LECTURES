// PROBLEM LINK : https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

// /*
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// */

// class Solution {
//   public:
//     vector<int> leftView(Node *root) {
//         // code here
//         queue<Node*> q ;
//         q.push(root) ;
//         vector<int> ans ;
//         // ans.push_back(root -> data) ;
//         while(q.size()){
//             int sz = q.size() ;
//             for(int i = 0 ; i < sz ; i++){
//                 Node* cur = q.front() ;
//                 if(i == 0) ans.push_back(cur -> data) ;
//                 q.pop() ;
                
//                 if(cur -> left != NULL)
//                 q.push(cur -> left) ;
                
//                 if(cur -> right != NULL)
//                 q.push(cur -> right) ;
//             }
//         }
//         return ans ;
//     }
// };


// // USING DFS
// /*
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// */


// class Solution {
//   public:
//     void left_dfs(Node *root , map<int , int> & mp , int level){
        
//         if(root == NULL){
//             return ;
//         }
        
//         if(mp.find(level) == mp.end()) mp[level] = root -> data ;
        
//         left_dfs(root -> left , mp , level + 1) ;
//         left_dfs(root -> right , mp , level + 1) ; 
        
        
        
//     }
//     vector<int> leftView(Node *root) {
//         // code here
//         map<int ,  int> mp ;
//         left_dfs(root , mp , 0 ) ;
        
//         vector<int> ans ;
//         for(auto i : mp){
//             ans.push_back(i.second) ;
//         }
//         return ans ;
//     }
// };