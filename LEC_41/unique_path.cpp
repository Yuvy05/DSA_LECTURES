// Problem Link : https://leetcode.com/problems/unique-paths/

// using recursion - WILL GIVE TLE 
// O( 2^ (N*M) )
// class Solution {
// public:
//     int paths(int i , int j , int m , int n){
//         if(i ==m-1 and j == n-1){
//             return 1 ;
//         }
//         // right
//         int total = 0 ;
//         if(i + 1 < m){
//             total += paths(i + 1 , j , m , n) ;
//         }

//         // down
//         if(j + 1 < n){
//             total += paths(i , j+ 1 , m , n) ;
//         }
//         return total ;
//     }
//     int uniquePaths(int m, int n) {
//         return paths(0,0,m,n) ;
//     }
// };



//  using recursive dp
// O(N*M)
// class Solution {
// public:
//     int paths(int i , int j , int m , int n , vector<vector<int>> &dp){
//         if(i ==m-1 and j == n-1){
//             return 1 ;
//         }

//         if(dp[i][j] != -1){
//             return dp[i][j] ;
//         }
//         // right
//         int total = 0 ;
//         if(j + 1 < n){
//             total +=  paths( i , j + 1, m , n , dp) ;
//         }

//         // down
//         if(i + 1 < m){
//             total +=  paths(i+1 , j , m , n , dp) ;
//         }
//         dp[i][j] = total ;

//         return dp[i][j] ;
//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m + 1 , vector<int>(n+1 , -1) ) ;
//         return paths(0,0,m,n , dp) ;
//     }
// };


// using iterative dp

// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m + 1 , vector<int>(n+1 , 0) ) ;
//         // return paths(0,0,m,n , dp) ;
//         dp[m-1][n] = 1 ;
//         //dp[m][n-1] = 1 ; // only one base case because otherwise at end point it will count twice

//         for(int i = m-1 ; i >= 0 ; i-- ){
//             for(int j = n-1 ; j >= 0 ; j--){
//                 int total = 0 ;
//                 //right
//                     total +=  dp[i][j+1] ;
//                 //left
//                     total +=  dp[i+1][j] ;
                
//                 dp[i][j] = total ;
//             }
//         }
//         return dp[0][0] ;
//     }
// };
