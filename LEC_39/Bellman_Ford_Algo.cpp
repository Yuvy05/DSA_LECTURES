// Problem Link : https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1


// class Solution {
//   public:
//     vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
//         // Code here
//         int n = edges.size() ;
//         vector<int>dist(V , 1e8) ;
//         dist[src] = 0 ;
//         for(int i = 0 ; i < V-1 ; i++){
//             for(auto it : edges){
//                 int u = it[0] ;
//                 int v = it[1] ;
//                 int wt = it[2] ;
//                 if(dist[u] != 1e8 and dist[u] + wt < dist[v]){
//                     dist[v] = dist[u] + wt ;
//                 }
//             }
//         }
//         for(auto i : edges){
//             int u = i[0] ;
//             int v = i[1] ;
//             int wt = i[2] ;
//             if(dist[u] != 1e8 and dist[v] > dist[u] + wt){
//                 return {-1} ;
//             }
//         }
//         return dist ;
//     }
// };
