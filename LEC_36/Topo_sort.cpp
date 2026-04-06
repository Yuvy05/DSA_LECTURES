// Problem Link : https://www.geeksforgeeks.org/problems/topological-sort/1

// class Solution {
//   public:
//     void dfs(int parent ,vector<int> &vis , vector<vector<int>> &adj , stack<int>&st){
//         vis[parent] = 1 ;
//         for(auto i : adj[parent]){
//             if(!vis[i]){
//                 dfs(i , vis , adj , st);
//             }
//         }
//         st.push(parent) ;
        
//     }
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>> adj(V) ;
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//         }
//         vector<int> vis(V,0) ;
//         stack<int>st ;
//         for(int i = 0 ; i < V ; i++){
//             if(!vis[i]){
//                 dfs(i , vis ,adj , st) ;
//             }
//         }
//         vector<int> ans ;
//         while(st.size()){
//             ans.push_back(st.top()) ;
//             st.pop() ;
//         }
//         return ans ;
//     }
// };