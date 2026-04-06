// Problem Link : https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
// /*
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int x) {
//         data = x;
//         left = right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     vector<int> bottomView(Node *root) {
//         // code here
//         vector<int> ans ;
//         map<int,int>mp ;
//         queue<pair<Node* , int>> q ;
//         q.push({root , 0}) ;
        
//         while(q.size() != 0){
//             Node* curr = q.front().first ;
//             int axis = q.front().second ;
//             mp[axis] = curr -> data ;
//             q.pop() ;
//             if(curr -> left!= NULL){
//                 q.push({curr -> left , axis - 1}) ;
//             }
//             if(curr -> right!= NULL){
//                 q.push({curr -> right , axis + 1}) ;
//             }
//         }
//         for(auto i : mp){
//             ans.push_back(i.second) ;
//         }
//         return ans ;
//     }
// };