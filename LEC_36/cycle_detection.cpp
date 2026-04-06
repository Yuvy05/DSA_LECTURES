// Problem Link : https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


// using DFS
// class Solution {
//   public:
//     bool dfs_cycle(vector<int> adj[] , int root , vector<int> &parent , vector<int> &vis){
//         vis[root] = 1 ;
//         // root is the parent node
//         for(auto neigh : adj[root]){
//             // mere neighbours visited mei nahi aaney chahiye except parent 
//             if(vis[neigh] == 1 and neigh != parent[root]){
//                 return true ;
//             }
//             else{
//                 // for hell hole removal
//                 if(vis[neigh] != 1){
//                     parent[neigh] = root ;
//                     if(dfs_cycle(adj , neigh , parent,vis)){
//                         return true ;
//                     }
                    
//                 }
//             }
//         }  
//         return false ;
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//         vector<int> adj[V] ;
        
//         //parent
//         vector<int>parent(V) ;
//         //visited
//         vector<int>vis(V,-1) ;
        
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//             adj[v].push_back(u) ;
//         }
        
//         for(int i = 0 ; i < V ; i++){
//             if(vis[i] == -1 and dfs_cycle(adj , i , parent , vis)) return true ;
//         }
//         return false ;
//     }
// };

// using BFS

// class Solution {
//   public:
//   bool bfs(int node ,vector<vector<int>>&adj , vector<int> &vis){
//       queue<int>q ;
//       q.push(node) ;
//       int n = adj.size() ;
//       vector<int>parent(n,-1) ;
//       while(q.size()){
//           int x = q.front() ;
//           q.pop() ;
//           vis[x] = 1 ;
//           for(auto i : adj[x]){
//               if(vis[i] == 1){
//                   if(parent[x] != i){
//                       return true;
//                   }
//               }
//               else{
//                   q.push(i) ;
//                   parent[i] = x ;
//               }
//           }
//       }
//       return false;
//   }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//         vector<vector<int>>adj(V) ;
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//             adj[v].push_back(u) ;
//         }
//         vector<int> vis(V,0) ;
//         for(int i = 0 ; i < V ; i++){
//             if(vis[i] == 0){
//                 if(bfs(i,adj,vis)) return true ; // kisi bhi node par cycle mil gayi to return maardo
//             }
//         }
//         return false ;
//     }
// };

