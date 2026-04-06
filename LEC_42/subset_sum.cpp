// Problem Link : https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1


// using iterative or tabulation dp
// class Solution {
//   public:
    
//     bool isSubsetSum(vector<int>& arr, int sum) {
//         // code here
        
//         // dp [index] [ sum ]
        
//         int n = arr.size() ;

//         vector<vector<bool>>dp(n + 1 , vector<bool>(sum + 1 , false)) ;
        
//         for(int i = 0 ; i <= n ; i++){
//             dp[i][0] = true ;
//         }
        
//         dp[0][arr[0]] = true ;
        
//         for(int i = 1 ; i < n ; i++){
//             for(int target = 0 ; target <= sum ; target++){
                
//                 // we have 2 option
//                 // 1) pick the element
//                 // 2) take from previous(not pick)
                
//                 // 1) pick
//                 bool op1 = false; 
//                 if(arr[i] <= target){
//                     op1 = dp[i-1][target - arr[i]] ;
//                 }

//                 // 2) not pick
//                 bool op2 = dp[i-1][target] ;
                
//                 dp[i][target] = op1 or op2 ;            
                
//             }
//         }
//         return dp[n-1][sum] ;
//     }
// };


// using recursive or memoization dp

// class Solution {
//   public:
//     bool recur(int i , int target , vector<int>& arr , vector<vector<int>> &dp){
//         if(i == arr.size()){
//             if(target == 0) return true ;
//             return false ;
//         }
//         if(target == 0){
//             return dp[i][target] = true ;
//         }
//         if(dp[i][target] != -1 ){
//             return dp[i][target]  ;
//         }
        
//         // 2 options 
//         bool op1 = false; // pick 
//         bool op2 = false ; // not pick
//         //
//         if(arr[i] <= target){
//             op1 = recur(i + 1 , target - arr[i] , arr , dp) ;
//         }
        
//         op2 = recur(i + 1 , target , arr , dp) ;
        
//         return dp[i][target] = op1 or op2 ;
        
//     }
//     bool isSubsetSum(vector<int>& arr, int sum) {
//         // code here
        
//         // dp [ index ] [ sum ]
//         int idx = arr.size() ;
//         vector<vector<int>>dp(idx + 1 , vector<int>(sum + 1 , -1 )) ;
//         return recur(0,sum,arr , dp) ;
        
//     }
// };

