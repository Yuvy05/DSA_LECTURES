// Problem Link : https://leetcode.com/problems/partition-equal-subset-sum/

// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size() ;
//         int sum = accumulate(nums.begin() ,nums.end() , 0ll) ;
//         if(sum %2 != 0){
//             return false ;
//         }
//         int target = sum /2 ;
//         vector<vector<int>>dp(n+1 , vector<int>(target + 1 , 0)) ;

//         for(int i = 0 ; i < n ; i++){
//             dp[i][0] = true ;
//         }

//         if(nums[0] <= target) dp[0][nums[0]] = true ;

//         for(int i = 1 ; i < n ; i++){
//             for(int j = 0 ; j <= target ; j ++){
//                 bool op1 = false ;
//                 bool op2 = false ;
//                 // pick
//                 if(nums[i] <= j){
//                     op1 = dp[i-1][j - nums[i]] ;
//                 }
//                 // not pick
//                 op2 = dp[i-1][j] ;

//                 dp[i][j] = op1 or op2 ;
//             }
//         }
//         return dp[n-1][target] ;
//     }
// };