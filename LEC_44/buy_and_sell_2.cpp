// Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

// class Solution {
// public:
//     int recur(vector<int>& prices , int idx , int buy , vector<vector<int>> &dp ){

//         if(idx == prices.size()){
//             return 0 ;
//         }
        
//         if(dp[idx][buy] != -1){
//             return dp[idx][buy] ;
//         }

//         // buy 1 - pick .... 0 - not pick
//         int profit = 0 ;
//         if(buy)
//             profit = max(-prices[idx] + recur(prices, idx+1 , 0 , dp ) , 0 + recur(prices , idx+1 , 1 , dp)) ;
//         // sell
//         else{
//             profit = max(prices[idx] + recur(prices , idx + 1 , 1 , dp) , 0 + recur(prices , idx + 1 , 0 , dp)) ;
//         }

//         return dp[idx][buy] =  profit ;
        
//     }
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size() ;
//         vector<vector<int>> dp(n+1 , vector<int>(2 , -1)) ;

//         // status 
//         // 0 - buy
//         // 1 - sell
//         // 2 - not sell 

//         return recur(prices , 0 , 1 , dp) ;

//     }
// };