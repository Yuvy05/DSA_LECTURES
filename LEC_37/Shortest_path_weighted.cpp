// Problem Link : https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

// class Solution {
//   public:
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         // Code here
//         vector<vector<pair<int,int>>> adj(V) ;
//         for(int i = 0 ; i < edges.size() ; i++){
//             int u = edges[i][0] ;
//             int v = edges[i][1] ;
//             int wt = edges[i][2] ;
//             adj[u].push_back({v,wt}) ;
//             adj[v].push_back({u,wt}) ;
//         }
//         vector<int> dist(V , 1e9);
//         dist[src] = 0 ;
        
//         // priority -> dist,node
//         priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq ;
//         pq.push({0,src}) ;
//         while(pq.size()){
//             int d = pq.top().first ;
//             int n = pq.top().second ;
//             pq.pop() ;
//             for(auto neigh : adj[n]){
//                 if(d + neigh.second < dist[neigh.first]){
//                     dist[neigh.first] = d + neigh.second  ;
//                     pq.push({dist[neigh.first] , neigh.first}) ;
//                 }
//             }
//         }
//         return dist ;
//     }
// };