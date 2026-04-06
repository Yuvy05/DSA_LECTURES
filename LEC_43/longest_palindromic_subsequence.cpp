// Problem Link : https://leetcode.com/problems/longest-palindromic-subsequence/

// // TC -> O(N^2)
// // SC -> O(N^2)
// class Solution {
// public:
//     int lcs(string &s1 , string &s2 , int p1 , int p2 ,vector<vector<int>> &dp ){
//         if(p1 == s1.size() or p2 == s2.size()){
//             return 0 ;
//         }
//         if(dp[p1][p2] != -1){
//             return dp[p1][p2] ;
//         }

//         // match
//         if(s1[p1] == s2[p2]){
//             return dp[p1][p2] = 1 + lcs(s1 , s2 , p1+1 , p2+1 , dp) ;
//         }
//         //not match
//         else{
//             return dp[p1][p2] = max(lcs(s1 , s2 , p1 + 1 , p2 , dp) , lcs(s1 , s2 , p1 , p2 + 1 , dp)) ;
//         }
//     }
//     int longestPalindromeSubseq(string s) {
//         vector<vector<int>> dp(s.size() + 1 , vector<int>(s.size() + 1 , -1)) ;
//         string s1 = s ;
//         reverse(s.begin() , s.end()) ; 
//         return lcs(s1,s,0 , 0 , dp) ;
//     }
// };
