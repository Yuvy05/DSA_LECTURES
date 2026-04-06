// Problem Link : https://leetcode.com/problems/longest-common-subsequence/

// // using recursion -> will give TLE

// class Solution {
// public:
//     int recur(string s1 , string s2 , int p1 , int p2){
//         if(p1 == s1.size() || p2 == s2.size()){
//             return 0;
//         }
//         // match 
//         if(s1[p1] == s2[p2]){
//             return 1 + recur(s1,s2,p1+1,p2+1) ;
//         }
//         // not match
//         else{
//             return max(recur(s1,s2,p1+1 , p2) , recur(s1,s2 , p1, p2+1)) ;
//         }
//     }
//     int longestCommonSubsequence(string s1, string s2) {
//         return recur(s1,s2,0,0) ;
//     }
// };


// using recursive or memoization dp

// class Solution {
// public:
//     int recur(string &s1 , string &s2 , int p1 , int p2 , vector<vector<int>> &dp){
//         if(p1 == s1.size() || p2 == s2.size()){
//             return 0;
//         }

//         if(dp[p1][p2] != -1){
//             return dp[p1][p2] ;
//         }
//         // match 
//         if(s1[p1] == s2[p2]){
//             return dp[p1][p2] =  1 + recur(s1,s2,p1+1,p2+1 , dp) ;
//         }

//         // not match
//         else{
//             return dp[p1][p2] = max(recur(s1,s2,p1+1 , p2 , dp) , recur(s1,s2 , p1, p2+1 ,dp)) ;
//         }
//     }
//     int longestCommonSubsequence(string s1, string s2) {
//         vector<vector<int>> dp(s1.size() , vector<int>(s2.size() , -1)) ;
//         return recur(s1,s2,0,0 , dp) ;
//     }
// };

// using tabulation or iterative dp

// class Solution {
// public:
//     int longestCommonSubsequence(string s1, string s2) {
//         vector<vector<int>> dp(s1.size()+1 , vector<int>(s2.size()+1 , 0)) ;
//         // return recur(s1,s2,0,0 , dp) ;
//         dp[s1.size()][s2.size()] = 0 ;

//         for(int p1 = s1.size() - 1 ; p1>=0 ; p1--){
//             for(int p2 = s2.size() - 1 ; p2>= 0 ; p2--){
//                 // match
//                 if(s1[p1] == s2[p2]){
//                     dp[p1][p2] =  1 + dp[p1+1][p2+1] ;
//                 }

//                 // not match
//                 else{
//                     dp[p1][p2] = max(dp[p1+1][p2] , dp[p1][p2+1]) ;
//                 }
//             }
//         }
//         return dp[0][0] ;
//     }

// };