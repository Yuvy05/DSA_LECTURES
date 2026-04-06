// Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

// using recursive dp


// class Solution {
// public:
//     int recur(int idx , int trans , int buy , vector<int>& prices , vector<vector<vector<int>>> &dp){
//         if(idx == prices.size() or trans == 0){
//             return 0 ;
//         }
        
//         if(dp[idx][trans][buy] != -1){
//             return dp[idx][trans][buy] ;
//         }
//         int profit1 = 0 , profit2 = 0 , profit3 = 0 ;
//         // buy
//         if(buy == 1){
//             // profit1 = -prices[idx] + recur(idx + 1 , trans  , 0 , prices , dp , ) ;
//             profit1 = max(-prices[idx] + recur(idx + 1 , trans  , 0 , prices , dp) ,0 + recur(idx + 1 , trans , 1 , prices,dp) ) ;
//         }
//         // sell
//         else if(buy == 0 and trans > 0){
//             // profit2 = prices[idx] + recur(idx+1 , trans - 1, 1 , prices , dp) ;
//             profit1 = max(prices[idx] + recur(idx + 1 , trans - 1 , 1 , prices , dp) ,0 + recur(idx + 1 , trans , 0 , prices,dp) ) ;
//         }

//         // hold
//         // profit3 = 0 + recur(idx + 1 , trans , buy , prices,dp) ;

//         // return dp[idx][trans][buy] =  max({profit1 , profit2 , profit3}) ;
//         return dp[idx][trans][buy] = profit1 ;
//     }
//     int maxProfit(vector<int>& prices) {
//         // idx trans buy
//         vector<vector<vector<int>>> dp(prices.size() + 1 , vector<vector<int>>(3 , vector<int>(2 , -1))) ;
//         return recur( 0 , 2 , 1 , prices , dp) ;
//     }
// };

// using tabulation dp

// class Solution {
// public:
//     int recur(int idx , int trans , int buy , vector<int>& prices , vector<vector<vector<int>>> &dp){

//         if(idx == prices.size() or trans == 0){
//             return 0 ;
//         }
        
//         if(dp[idx][trans][buy] != -1){
//             return dp[idx][trans][buy] ;
//         }

//         int profit1 = 0 , profit2 = 0 , profit3 = 0 ;

//         // buy

//         if(buy == 1){
//             // profit1 = -prices[idx] + recur(idx + 1 , trans  , 0 , prices , dp , ) ;
//             profit1 = max(-prices[idx] + recur(idx + 1 , trans  , 0 , prices , dp) ,0 + recur(idx + 1 , trans , 1 , prices,dp) ) ;
//         }
//         // sell
//         else if(buy == 0 and trans > 0){
//             // profit2 = prices[idx] + recur(idx+1 , trans - 1, 1 , prices , dp) ;
//             profit1 = max(prices[idx] + recur(idx + 1 , trans - 1 , 1 , prices , dp) ,0 + recur(idx + 1 , trans , 0 , prices,dp) ) ;
//         }

//         // hold
//         // profit3 = 0 + recur(idx + 1 , trans , buy , prices,dp) ;

//         // return dp[idx][trans][buy] =  max({profit1 , profit2 , profit3}) ;
//         return dp[idx][trans][buy] = profit1 ;
//     }
//     int maxProfit(vector<int>& prices) {
//         // idx trans buy

//         vector<vector<vector<int>>> dp(prices.size() + 1 , vector<vector<int>>(3 , vector<int>(2 , 0))) ;
//         int n = prices.size() ;
//         for(int idx = n-1 ; idx >= 0 ; idx -- ){
//             for(int trans = 1 ; trans <=2 ; trans ++){
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
//         return dp[0][2][1] ;
//     }
// };