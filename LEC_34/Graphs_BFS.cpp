// Problem Link : https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

// class Solution {
//   public:
//     void bfs(vector<int> &ans , vector<int> &vis , vector<vector<int>> &adj , int curr){
//         queue<int>q ;
//         q.push(curr) ;
//         vis[curr] = 1 ;
//         while(q.size()){
//             int n = q.front() ;
//             ans.push_back(n) ;
//             q.pop() ;
//             for(auto i : adj[n]){
//                 if(vis[i] == 0){
//                     q.push(i) ;
//                     //ans.push_back(i) ;
//                     vis[i] = 1 ;
//                 }
//             }
//         }
//     }
//     vector<int> bfs(vector<vector<int>> &adj) {
//         // code here
//         vector<int> ans ;

        // adjacency list is given
//         vector<int> vis(adj.size() , 0) ;
//         bfs(ans , vis , adj , 0) ;
//         return ans ;
//     }
// };