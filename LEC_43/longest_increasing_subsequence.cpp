// Problem Link : https://leetcode.com/problems/longest-increasing-subsequence/

// using recursion  -> WILL GIVE TLE

// class Solution {
// public:
//     int lis(int idx , int prev , vector<int>& nums){

//         // pick
//         if(idx >= nums.size()){
//             return 0 ;
//         }
//         int pick = 0 ;
//         if(prev == -1 or nums[idx] > nums[prev]){
//             pick = 1 + lis(idx + 1 , idx,nums) ;
//         }

//         // not pick
//         int not_pick = 0 ;
//         not_pick = 0 + lis(idx + 1 , prev , nums)  ;

//         return max(pick , not_pick) ;
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         return lis(0,-1,nums) ;
//     }
// };



// using recursive dp 

// class Solution {
// public:
//     int lis(int idx , int prev , vector<int>& nums , vector<vector<int>> &dp ){

       
//         if(idx >= nums.size()){
//             return 0 ;
//         }

//         if(dp[idx][prev+1] != -1){
//             return dp[idx][prev+1] ;
//         }
//         // pick
//         int pick = 0 ;
//         if(prev == -1 or nums[idx] > nums[prev]){
//             pick = 1 + lis(idx + 1 , idx,nums , dp ) ;
//         }

//         // not pick
//         int not_pick = 0 ;
//         not_pick = 0 + lis(idx + 1 , prev , nums , dp)  ;

//         return dp[idx][prev+1] = max(pick , not_pick) ;
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         vector<vector<int>> dp(nums.size() + 1 , vector<int>(nums.size() + 1 , -1)) ;
//         return lis(0,-1,nums , dp) ;
//     }
// };
