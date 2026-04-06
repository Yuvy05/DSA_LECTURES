// Problem Link : https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1

// class Solution {
//   public:
//     void dfs(vector<int>adj[],vector<int> &vis ,vector<vector<int>> &ans ,  int curr , int j){
//         if(vis[curr] == 1){
//             return ;
//         }
//         ans[j].push_back(curr) ;
//         vis[curr] = 1 ;
//         for(auto i : adj[curr]){
//             if(vis[i] == -1){
//                 dfs(adj , vis ,ans , i , j) ;
//             }
//         }
//     }
//     vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<int> adj[V] ;
//         vector<vector<int>> ans ;
//         for(int i = 0 ; i < edges.size() ; i ++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//             adj[v].push_back(u) ;
//         }
//         vector<int> vis(V , -1) ;
        

            // if asked for count just keep  a count variable and increment it every time inside the if in for loop

            
//         int j = 0 ;
//         for(int i = 0 ; i < V ; i ++){
//             if(vis[i] == -1){
//                 ans.push_back({}) ;
//                 dfs(adj , vis , ans , i , j);
//                 j++ ;
//             }
//         }
//         return ans ;
//     }
// };
