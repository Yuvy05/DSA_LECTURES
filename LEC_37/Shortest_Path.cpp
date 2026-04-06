// Problem Link : https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1

// class Solution {
//   public:
//     vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
//         // code here
//         vector<vector<int>> adj(V) ;
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             adj[u].push_back(v) ;
//             adj[v].push_back(u) ;
//         }
//         queue<int>q ;
//         q.push(src) ;

//         vector<int> dist(V , 1e9) ;
//         dist[src] = 0 ;
//         while(q.size()){
//             int node = q.front() ;
//             q.pop() ;
//             for(auto i : adj[node]){
//                 if(dist[i] > dist[node]+1){
//                     dist[i] = dist[node] + 1 ;
//                     q.push(i) ;
//                 }
//             }
//         }
//         for(int i = 0 ; i < V ; i++){
//             if(dist[i] == 1e9){
//                 dist[i] = -1 ;
//             }
//         }
//         return dist ;
//     }
// };
