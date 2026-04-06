// Problem Link : https://leetcode.com/problems/unique-paths-ii/

// class Solution {
// public:
//     int recur(int i , int j , int n , int m ,vector<vector<int>>& obstacleGrid , vector<vector<int>> &dp){
//         if(obstacleGrid[i][j] == 1){
//             return dp[i][j] = 0 ;
//         }
//         if(i == m-1 and j==n-1){
//             return 1 ;
//         }
        
//         // right
//         if(dp[i][j]!= -1 ){
//             return dp[i][j] ;
//         }
//         int totals = 0 ;
//         if(j+1 < n){
//             totals += recur(i , j+1 , n , m , obstacleGrid , dp) ;
//         }
//         if(i+1 < m ){
//             totals += recur(i+1 , j , n , m , obstacleGrid , dp) ;
//         }
//         dp[i][j] = totals ;
//         return dp[i][j] ;
//         // down
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size() ;
//         int n = obstacleGrid[0].size() ;
//         vector<vector<int>>dp(m +1, vector<int>(n+1 , -1)) ;

//         return recur(0 ,0 , n , m , obstacleGrid , dp ) ;
//     }
// };


// using tabulation or iterative method 
// class Solution {
// public:
//     int recur(int i , int j , int n , int m ,vector<vector<int>>& obstacleGrid , vector<vector<int>> &dp){
//         if(obstacleGrid[i][j] == 1){
//             return dp[i][j] = 0 ;
//         }
//         if(i == m-1 and j==n-1){
//             return 1 ;
//         }
        
//         // right
//         if(dp[i][j]!= -1 ){
//             return dp[i][j] ;
//         }
//         int totals = 0 ;
//         if(j+1 < n){
//             totals += recur(i , j+1 , n , m , obstacleGrid , dp) ;
//         }
//         if(i+1 < m ){
//             totals += recur(i+1 , j , n , m , obstacleGrid , dp) ;
//         }
//         dp[i][j] = totals ;
//         return dp[i][j] ;
//         // down
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size() ;
//         int n = obstacleGrid[0].size() ;
//         vector<vector<long long>>dp(m +1, vector<long long>(n+1 , 0)) ;

//         // return recur(0 ,0 , n , m , obstacleGrid , dp ) ;
//         if(obstacleGrid[m-1][n-1] != 1)
//             dp[m][n-1] = 1 ;

//         for(int i = m - 1 ; i >= 0 ; i --){
//             for(int j = n-1 ; j >= 0 ; j--){
//                 if(obstacleGrid[i][j] == 1){
//                     dp[i][j] = 0 ;
//                     continue ;
//                 }
//                 // right
//                 long long total = 0 ; 
                
//                    total += dp[i][j+1] ;
                

//                 // down
                
//                    total += dp[i+1][j] ;
                

//                 dp[i][j] = total ;
//             }
//         }
//         return dp[0][0] ;
//     }
// };