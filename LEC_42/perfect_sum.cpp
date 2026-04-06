// Problem Link : https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1

// class Solution {
//   public:
//     int perfectSum(vector<int>& arr, int target) {
//         // code here
//         int n =arr.size() ;
//         vector<vector<int>>dp(n+1 , vector<int>(target + 1 , 0)) ;

//         for(int i = 0 ; i < n ; i++){
//             dp[i][0] = 1 ;
//             if(arr[i] == 0) dp[i][0] = 2 ;
//         }

//         if(arr[0] != 0 and arr[0] <= target) dp[0][arr[0]] = true ;

//         for(int i = 1 ; i < n ; i++){
//             for(int j = 0 ; j <= target ; j ++){
//                 int op1 = 0 ;
//                 int op2 = 0 ;
//                 // pick
//                 if(arr[i] <= j){
//                     op1 = dp[i-1][j - arr[i]] ;
//                 }
//                 // not pick
//                 op2 = dp[i-1][j] ;

//                 dp[i][j] = op1 + op2 ;
//             }
//         }
//         return dp[n-1][target] ;
        
//     }
// };