// Problem Link : https://leetcode.com/problems/number-of-enclaves/description/


// class Solution {
// public:

//     // bfs
//     void bfs(int i , int j ,int n , int m ,vector<vector<int>>& grid){
//         queue<pair<int,int>>q ;
//         q.push({i,j}) ;
//         grid[i][j] = 2 ;
//         while(q.size()){
//             //right
//             int i = q.front().first ;
//             int j = q.front().second ;
//             q.pop() ;
//             if(j+1 < m and grid[i][j+1] == 1){
//                 q.push({i,j+1}) ;
//                 grid[i][j+1] = 2 ;
//             }
//             //left
//             if(j-1 >= 0 and grid[i][j-1] == 1){
//                 q.push({i,j-1}) ;
//                 grid[i][j-1] = 2 ;
//             }
//             //up
//             if(i-1 >= 0 and grid[i-1][j] == 1){
//                 q.push({i-1,j}) ;
//                 grid[i-1][j] = 2 ;
//             }
//             //down
//             if(i+1 < n and grid[i+1][j] == 1){
//                 q.push({i+1,j}) ;
//                 grid[i+1][j] = 2 ;
//             }

//         }
//     }
//     int numEnclaves(vector<vector<int>>& grid) {
//         int n = grid.size() ;
//         int m = grid[0].size() ;

//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < m ; j++){
//                 if(i==0 or i == n-1 or j == 0 or j == m-1){
//                     if(grid[i][j] == 1)
//                         bfs(i,j,n,m,grid) ;
//                 }
//             }
//         }
//         int ct = 0 ;
//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < m ; j++){
//                 if(grid[i][j] == 1)
//                     ct++ ;
//             }
//         }
//         return ct ;
//     }
// };