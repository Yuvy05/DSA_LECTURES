// Problem Link : https://www.geeksforgeeks.org/problems/minimal-cost/1

//USING RECURSION DP

// class Solution {
//   public:
//     int frog(int n ,int k, vector<int>&arr ,  vector<int>&dp){
//         if(n == 0 ){
//             return 0 ;
//         }
//         if(dp[n] != -1){
//             return dp[n] ;
//         }
//         int cost = 1e9 ;

//         for(int i = 1 ; i <= k ; i++){
//             if(n - i >= 0){
//                 cost = min(cost , frog(n-i,k,arr,dp) + abs(arr[n] - arr[n-i])) ;
//             }
//         }
//         return dp[n] = cost ;
//     }
//     int minimizeCost(int k, vector<int>& arr) {
//         // Code here
//         int n = arr.size() ; 
//         vector<int>dp(n + 1 , -1) ;
//         return frog(n -1 ,k ,arr ,  dp);
//     }
// };



// USING TABULATION OR ITERATIVE DP


// class Solution {
//   public:

//     int minimizeCost(int k, vector<int>& arr) {
//         // Code here
//         int n = arr.size() ; 
//         vector<int>dp(n + 1 , -1) ;
//         dp[0] = 0 ;
        
//         for(int i = 1 ;i < n ; i++){
//             int cost = 1e9 ;
//             for(int idx = 1 ; idx <= k ; idx++){
//                 if(i-idx >= 0){
//                     cost = min(cost , dp[i-idx] + abs(arr[i-idx] - arr[i]));
//                 }
//             }
//             dp[i] = cost ;
//         }
        
//         return dp[n-1] ;
        
//     }
// };