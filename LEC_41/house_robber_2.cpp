// Problem Link : https://leetcode.com/problems/house-robber-ii/

// class Solution {
// public:
//     int rob1(int idx , vector<int> &nums , vector<int> &dp1){
//         if(idx >= dp1.size()){
//             return 0 ;
//         }
//         //pick
//         if(dp1[idx] != -1){
//             return dp1[idx] ;
//         }

//         int cost1 = nums[idx] ;
//         cost1 += rob1(idx+2 , nums , dp1) ;
//         // not pick
//         int cost2 = 0 ;
//         cost2 += rob1(idx+1 , nums , dp1) ;

//         dp1[idx] = max(cost1 , cost2) ;
//         return dp1[idx] ;
         
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size() ;
//         if(n==1) return nums[0] ;

//         vector<int>r1;
//         vector<int>r2;

//         vector<int>dp1(n-1 , -1) ;
//         vector<int>dp2(n-1 , -1) ;

//         for(int i = 0 ; i < nums.size() - 1 ; i++){
//             r1.push_back(nums[i]) ;
//         }
//         int ans1 = rob1(0 , r1 , dp1) ;
//         for(int i = 1 ; i < nums.size() ; i++){
//             r2.push_back(nums[i]) ;
//         }
//         int ans2 = rob1(0 , r2 , dp2) ;

//         return max(ans1,ans2) ;
//     }
// };