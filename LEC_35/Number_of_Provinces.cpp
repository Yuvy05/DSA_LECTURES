// Problem Link : https://leetcode.com/problems/number-of-provinces/

// class Solution {
// public:
//     void dfs(int n, vector<vector<int>>& isConnected, vector<int>& vis,
//              int curr) {
//         if(vis[curr] == 1){
//             return ;
//         }
//         vis[curr] = 1 ;
//         for(int i = 0 ; i < n ; i++){
//             if(isConnected[curr][i] == 1){
//             if(vis[i] == -1 ){
//                 dfs(n ,isConnected , vis , i ) ;
//             }
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size();
//         vector<int> vis(n, -1);
//         int ct = 0;
//         for (int i = 0; i < n; i++) {
//             if(vis[i] == -1){
//             dfs(n,isConnected , vis  , i) ;
//             ct++;
//             }
//         }
//         return ct;
//     }
// };