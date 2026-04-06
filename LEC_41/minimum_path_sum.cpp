// Problem link : https://leetcode.com/problems/minimum-path-sum/

// class Solution {
// public:
//     int recur(int i , int j , int n , int m , vector<vector<int>>& grid , vector<vector<int>>& dp){
//         if(i == n - 1 and j == m-1){
//             return grid[i][j] ;
//         }
//         if(dp[i][j] != -1){
//             return dp[i][j] ;
//         }
//         // right
//         int r = 1e9 ;
//         if(j + 1 < m){
//             r = grid[i][j] + recur(i , j+1 , n, m ,grid , dp) ;
//         }

//         // down
//         int d = 1e9 ;
//         if(i+1 < n){
//             d = grid[i][j] + recur(i+1 , j , n , m, grid , dp) ;
//         }
//         return dp[i][j] = min(r,d) ;
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         int n = grid.size() ;
//         int m = grid[0].size() ;
//         vector<vector<int>> dp(n , vector<int>(m , -1)) ;
//         return recur(0,0,n,m,grid,dp) ;
//     }
// };