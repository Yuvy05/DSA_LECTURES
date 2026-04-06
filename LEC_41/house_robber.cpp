// Problem Link : https://leetcode.com/problems/house-robber/

// recursion or memoization dp
// class Solution {
// public:
//     int loot(vector<int> &nums , int idx , vector<int> &dp){
//         if(idx >= nums.size()){
//             return 0 ;
//         }
//         if(dp[idx] != -1){
//             return dp[idx] ;
//         }
//         // loot
//         int cost1 =  nums[idx] + loot(nums , idx+2 , dp) ;
//         //not loot
//         int cost2 = 0 + loot(nums , idx+1 , dp ) ;

//         dp[idx] = max(cost1 , cost2) ;

//         return dp[idx] ;
//     }
//     int rob(vector<int>& nums) {
//         vector<int>dp(nums.size() + 1 , - 1) ;
//         return loot(nums , 0 , dp ) ;
//     }
// };


// tabulation or iterative dp
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         vector<int>dp(nums.size() +1 , -1) ;
//         dp[nums.size()] = 0 ;
//         for(int i = nums.size() - 1 ; i >=0 ; i --){
//             // pick
//             int cost1 = nums[i] ;
//             if(i+2 < nums.size()){
//                 cost1 += dp[i+2] ;
//             }
            
//             // not pick
//             int cost2 = 0 ;
//             if(i+1 < nums.size()){
//                 cost2 += dp[i+1] ;
//             }

//             dp[i] = max(cost1 , cost2) ;
//         }
//         return dp[0] ;
//     }
// };
