// Problem Link : https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/
// class Solution {
// public:
//     int recur(string &s1 , string &s2 , int p1 , int p2 , vector<vector<int>> &dp ){
//         if(p1 == s1.size() || p2 == s2.size()){
//             return 0 ;
//         }
//         if(dp[p1][p2] != -1){
//             return dp[p1][p2] ;
//         }
//         // match
//         if(s1[p1] == s2[p2]){
//             return dp[p1][p2] = 1 + recur(s1,s2,p1+1,p2+1,dp) ;
//         }
//         //no match
//         else{
//             return dp[p1][p2] = max(recur(s1,s2,p1+1,p2,dp) , recur(s1,s2,p1,p2+1,dp)) ;
//         }
//     }

//     int minInsertions(string s) {
//         string s1 = s ;
//         int n = s1.size() ;
//         vector<vector<int>> dp(n+1 , vector<int>(n + 1 , -1)) ;
//         reverse(s.begin() , s.end()) ;
//         return n - recur(s1,s,0,0,dp) ;
//     }
// };