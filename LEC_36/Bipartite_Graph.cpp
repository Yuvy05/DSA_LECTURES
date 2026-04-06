// Problem Link : https://www.geeksforgeeks.org/problems/bipartite-graph/1


// using BFS

// class Solution {
//   public:
//     bool isBipartite(int V, vector<vector<int>> &edges) {
//         // Code here
//         vector<vector<int>> adj(V) ;
//         for(int i = 0 ; i < edges.size()  ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//             adj[v].push_back(u) ;
//         }
//         vector<int>color(V , -1) ;
//         color[0] = 0 ;
//         queue<int>q ;
//         q.push(0) ;
//         while(q.size()){
//             int node = q.front() ;
//             q.pop() ;
//             for(auto i : adj[node]){
//                 // not visited
//                 if(color[i] == -1){
//                     color[i] = !color[node] ;
//                     q.push(i) ;
//                 }
//                 // visited
//                 else if(color[i] == color[node]){
//                     return false ;
//                 }
//             }
//         }
//         return true ;
//     }
// };



// USING DFS 



// class Solution {
//   public:
//     bool dfs(vector<vector<int>>&adj , vector<int>&vis ,vector<int>&color , int curr ) {
//         vis[curr] = 1 ;
//         for(auto i : adj[curr]){
//             // not visited
//             if(vis[i] == -1){
//                 color[i] = !color[curr] ;
//                 if(dfs(adj , vis , color ,i) == false) return false ; ;
//             }
//             else if(color[i] == color[curr]){
//                 return false ;
//             }
//         }
//         return true ;
//     }
//     bool isBipartite(int V, vector<vector<int>> &edges) {
//         // Code here
//         vector<vector<int>>adj(V);
//         for(int i= 0 ; i < edges.size();i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//             adj[v].push_back(u) ;
//         }
        
//         vector<int>vis(V,-1) ;
//         vector<int>color(V) ;
//         color[0] = 0 ;
//         return dfs(adj , vis , color , 0) ;
        
//     }
// };