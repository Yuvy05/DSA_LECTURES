// Problem link : https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

// /*
// class Node {
//   public:
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
//     vector<int> topView(Node *root) {
//         if(root == NULL){
//             return {} ;
//         }
//         // code here
//         queue<pair<Node* , int>>q ;
//         map<int,int> mp ;
        
//         q.push({root , 0}) ;
        
        
//         while(q.size() != 0){
//             int axis = q.front().second;
//             Node* curr = q.front().first ;
//             q.pop() ;
//             if(mp.find(axis) == mp.end()) mp[axis] = curr-> data ;
            
//             if(curr ->left != NULL){
//                 q.push({curr -> left , axis-1}) ;
//             }
//             if(curr ->right != NULL){
//                 q.push({curr -> right , axis + 1}) ;
//             }
            
            
//         }
//         vector<int>ans ;
        
//         for(auto i : mp){
//             ans.push_back(i.second) ;
//         }
//         return ans ;
        
//     }
// };

 