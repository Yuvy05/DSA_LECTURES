// Problem Link : https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1

// // User function template for C++

// class Solution {
//   public:
//     void floydWarshall(vector<vector<int>> &dist) {
//         // Code here
//         // for(int i = 0 ; i < dist.size() ; i++){
//         //     for(int j = 0 ; j < dist.size() ; j ++){
//         //         if(dist[i][j] == -1){
//         //             dist[i][j] = 1e9 ;
//         //         }
//         //         if(i == j)dist[i][j] = 0 ;
//         //     }
//         // }
//         int n = dist.size() ;
//         for(int k = 0 ; k <  dist.size() ; k++){
            
//             for(int i = 0 ; i < n ; i++){
//                 for(int j = 0 ; j < n ; j++){
//                     if(dist[i][k] == 1e8 || dist[k][j] == 1e8) continue ;
//                     dist[i][j] = min(dist[i][k] + dist[k][j] , dist[i][j]) ;
//                 }
//             }
//         }
//         // for(int i = 0 ; i< dist.size() ; i++){
//         //     for(int j = 0 ; j < dist.size() ; j ++){
//         //         if(dist[i][j] == 1e8 ){
//         //             dist[i][j] = -1 ;
//         //         }
//         //     }
//         // }
//     }
// };