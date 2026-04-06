// Problem Link : https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// class Solution {
//   public:
//     void traverse(vector<vector<int>>& adj , vector<int> &vis ,vector<int>&ans , int curr){
//         if(vis[curr] == 1){
//             return ;
//         }
//         ans.push_back(curr) ;
//         vis[curr] = 1 ;
//         for(auto i : adj[curr]){
//             if(vis[i] == -1){
//                 traverse(adj , vis ,ans , i) ;
//             }
//         }
        // https://www.artstation.com/search?sort_by=relevance&query=motivation%20wallpaper
//     }
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
//         vector<int>ans ;
//         vector<int>vis(adj.size() , -1) ;


            //  for disconnected graph , traverse all nodes

            // for(int i = 0 ; i < adj.size()  ; i++){
            //     traverse(adj , vis , ans , 0) ;
            // }


//         traverse(adj , vis , ans , 0) ;
//         return ans ;
//     }
// };