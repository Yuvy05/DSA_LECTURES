// Problem Link : https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

// APPROACH 1 : PATH VISITED AND VISITED ARRAY

// class Solution {
//     public:
//     bool dfs(int parent , vector<vector<int>> &adj , vector<int>&pathVis , vector<int>&vis){
//         pathVis[parent] = 1 ;
//         vis[parent] = 1 ;
//         for(auto i : adj[parent]){
//             // if not visited
//             if(!vis[i]){
//                 if(dfs(i , adj , pathVis , vis)) {
//                     return true ;
//                 }
//             }
//             // if visited and path visited
//             else if(pathVis[i] and vis[i]){
//                 return true ;
//             }
//         }
//         pathVis[parent] = 0 ;
//         return false ;
//     }
//     bool isCyclic(int V, vector<vector<int>> &edges) {
//         // code here
//         vector<vector<int>> adj(V) ;
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//         }
        
//         vector<int>pathVis(V,0) ;
//         vector<int>vis(V,0) ;
//         for(int i = 0 ; i < V ; i++){
//             if(!vis[i]){
//                 if(dfs(i , adj , pathVis , vis) == true){
//                     return true ;
//                 } 
//             }
//         }
//         return false ;
//     }
// };




// APPROACH 2 : SINGLE VISITED ARRAY

// class Solution {
//   public:
//     bool dfs(vector<vector<int>>&adj , vector<int> &vis , int curr){
//         vis[curr] = 1 ;
//         for(auto i : adj[curr]){
//             if(vis[i] == 1){
//                 return true;
//             }
//             if(vis[i] != 1){
//                 if(dfs(adj , vis , i)) return true ;
//                 vis[i] = 0 ;
//             }
//         }
//         return false;
//     }
//     bool isCyclic(int V, vector<vector<int>> &edges) {
//         // code here
//         vector<int>vis(V,0) ;
//         vector<vector<int>>adj(V) ;
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0];
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//         }
//         for(int i = 0 ; i < V ; i++){
//             if(vis[i] == 0){
//                 if(dfs(adj , vis,i)) return true ;
//                 vis[i] = 0 ;
//             }
            
//         }
//         return false;
//     }
// };