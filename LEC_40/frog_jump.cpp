Problem Link : https://www.geeksforgeeks.org/problems/geek-jump/1

// using RECURSION 

// this will give TLE

// class Solution {
//   public:
//     int frog_jump(vector<int>& height , int idx){
//         if(idx <= 0){
//             return 0 ;
//         }
//         int cost1 = 1e9 , cost2 = 1e9 ;
//         if(idx - 1 >= 0)
//             cost1 = abs(height[idx-1] - height[idx])+ frog_jump(height , idx-1) ;
//         if(idx - 2 >= 0)
//             cost2 = abs(height[idx-2] - height[idx]) + frog_jump(height , idx-2) ;
            
//         return min(cost1,cost2) ;
//     }
//     int minCost(vector<int>& height) {
//         // Code here
//         return frog_jump(height , height.size()-1);
        
//     }
// };


// USING DP
// USING MEMOIZATION

// class Solution {
//   public:
//     int frog_jump(vector<int>& height , int idx , vector<int>&dp ){
//         if(idx <= 0){
//             return 0 ;
//         }
        
//         if(dp[idx] != -1){
//             return dp[idx] ;
//         }
//         int cost1 = 1e9 , cost2 = 1e9 ;
        
//         if(idx - 1 >= 0)
//             cost1 = abs(height[idx-1] - height[idx])+ frog_jump(height , idx-1,  dp) ;
//         if(idx - 2 >= 0)
//             cost2 = abs(height[idx-2] - height[idx]) + frog_jump(height , idx-2 , dp) ;
            
//         return dp[idx] = min(cost1,cost2) ;
//     }
//     int minCost(vector<int>& height) {
//         // Code here
//         vector<int>dp(height.size() +1 , -1) ;
//         return frog_jump(height , height.size()-1 , dp);
        
//     }
// }; 


//  USING TABULATION DP 

// class Solution {
//   public:

//     int minCost(vector<int>& height) {
//         // Code here
//         vector<int>dp(height.size() +1 , -1) ;
//         dp[0] = 0 ; 
//         for(int idx = 1 ; idx <= height.size() - 1 ; idx++){
//             int cost1 = 1e9 , cost2 = 1e9 ;
//             if(idx - 1 >= 0){
//                 cost1 = dp[idx-1] + abs(height[idx] - height[idx-1]) ;
//             }
//             if(idx - 2 >= 0){
//                 cost2 = dp[idx-2] + abs(height[idx] - height[idx-2]) ;
//             }
//             dp[idx] = min(cost1 , cost2) ;
//         }
//         return dp[height.size() - 1] ;
//     }
// };