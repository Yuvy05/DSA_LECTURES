// Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int ans = 0 ;
//         int mn = prices[0] ;
//         for(int i = 1 ; i < prices.size() ; i++){
//             int curr_profit = prices[i] - mn ;
//             ans = max(ans,curr_profit) ;
//             mn = min(mn,prices[i]) ;
//         }
//         return ans ;
//     }
// };