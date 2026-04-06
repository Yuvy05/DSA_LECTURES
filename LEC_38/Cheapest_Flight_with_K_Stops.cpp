// Problem Link : https://leetcode.com/problems/cheapest-flights-within-k-stops/description/

// class Solution {
// public:

//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         // adj -> { node , wt }
//         vector<vector<pair<int,int>>> adj(n) ;
//         for(int i = 0 ; i < flights.size() ; i++){
//             int u = flights[i][0] ;
//             int v = flights[i][1] ;
//             int wt = flights[i][2] ;
//             adj[u].push_back({v,wt}) ;
//         }
//         vector<int> dist(n , 1e9) ;
//         dist[src] = 0 ;

//         // pq -> {cost , k  node}
//         int stop = -1 ;
//         // priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
//         queue<vector<int>> pq ;
//         pq.push({ stop, 0 , src}) ;
//         int mn = INT_MAX ;

//         vector<int>c (n,1e9) ;

//         while(pq.size() ){
//             vector<int> node = pq.front() ;
//             int cost = node[1] ;
//             int stop = node[0] ;
//             int n = node[2] ;
//             pq.pop() ;
//             if(n == dst and stop <= k){
//                 mn = min(mn , cost) ;
//             }
//             if(stop > k) continue ;
//             // neigh -> { node , wt }
//             // pq -> {cost , k  node}
//             for(auto neigh : adj[n]){
//                 if(stop <= k and c[neigh.first] > cost + neigh.second){

//                     c[neigh.first] = cost + neigh.second ;
//                     pq.push({ stop+1,cost + neigh.second  , neigh.first}) ;
//                 }
//             }
//         }
//         return (mn == INT_MAX) ? -1 : mn ;
//     }

//     //  map<int, vector<pair<int,int>>> adj;
//     //     for (auto &f : flights) {
//     //         adj[f[0]].push_back({f[1], f[2]});
//     //     }

//     //     // min-heap: {cost, stops, node}
//     //     priority_queue<
//     //         vector<int>,
//     //         vector<vector<int>>,
//     //         greater<vector<int>>
//     //     > pq;

//     //     pq.push({0, -1, src});

//     //     while (!pq.empty()) {
//     //         auto curr = pq.top();
//     //         pq.pop();

//     //         int cost  = curr[0];
//     //         int stops = curr[1];
//     //         int node  = curr[2];

//     //         // first time reaching dst is the cheapest
//     //         if (node == dst && stops <= k) {
//     //             return cost;
//     //         }

//     //         if (stops > k) continue;

//     //         for (auto &neigh : adj[node]) {
//     //             pq.push({
//     //                 cost + neigh.second,
//     //                 stops + 1,
//     //                 neigh.first
//     //             });
//     //         }
//     //     }

//     //     return -1;
//     // }
// };