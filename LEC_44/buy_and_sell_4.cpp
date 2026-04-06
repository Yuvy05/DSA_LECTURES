// Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

// class Solution {
// public:
//     int maxProfit(int k, vector<int>& prices) {
//         vector<vector<vector<int>>> dp(prices.size() + 1 , vector<vector<int>>(k+1 , vector<int>(2 , 0))) ;
//         int n = prices.size() ;
//         for(int idx = n-1 ; idx >= 0 ; idx -- ){
//             for(int trans = 1 ; trans <=k ; trans ++){
//                 for(int buy = 0 ; buy < 2 ; buy ++){
//                     int profit1 = 0 ;
//                     if(buy == 1){
//                         // profit1 = -prices[idx] + recur(idx + 1 , trans  , 0 , prices , dp ) ;
//                         profit1 = max(-prices[idx] + dp[idx+1][trans][0] , 0 + dp[idx+1][trans][1]) ;
//                     }
//                     // sell
//                     else if(buy == 0){
//                         // profit2 = prices[idx] + recur(idx+1 , trans - 1, 1 , prices , dp) ;
//                         profit1 = max(prices[idx] + dp[idx+1][trans-1][1] , 0 + dp[idx+1][trans][0]) ;
//                     }
//                     dp[idx][trans][buy] = profit1 ;
//                 }
//             }
//         }
//         return dp[0][k][1] ;
//     }
// };