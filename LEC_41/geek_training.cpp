// Problem Link : https://www.geeksforgeeks.org/problems/geeks-training/1

//  RECURSION : 
// O(3 ^ N)    WILL LEAD TO TLEg
// class Solution {
//   public:
//     int point(int ith ,vector<vector<int>>& mat , int last_activity ){
//         if(ith >= mat.size()){
//             return 0 ;
//         }
//         // run
        
//         int point1 = 0 ;
//         if(last_activity != 0)
//             point1 += mat[ith][0] + point(ith+1 , mat , 0) ;
//         //fight
//         int point2 = 0 ;
//         if(last_activity != 1)
//             point2 += mat[ith][1] + point(ith+1 , mat , 1) ;
//         //learn
//         int point3 = 0 ;
//         if(last_activity != 2)
//             point3 += mat[ith][2] + point(ith+1 , mat , 2) ;
        
//         return max({point1 ,point2 ,point3} ) ;
        
//     }
//     int maximumPoints(vector<vector<int>>& mat) {
//         // code here
//         return point(0 , mat , 3) ;
//     }
// };


// O (4*N)
// USING RECURSIVE DP

// class Solution {
//   public:
//     int point(int ith ,vector<vector<int>>& mat , int last_activity , vector<vector<int>> &dp ){
//         if(ith >= mat.size()){
//             return 0 ;
//         }
        
//         if(dp[ith][last_activity] != -1){
//             return dp[ith][last_activity] ;
//         }
        
//         // run
//         int point1 = 0 ;
//         if(last_activity != 0)
//             point1 += mat[ith][0] + point(ith+1 , mat , 0 , dp) ;
//         //fight
//         int point2 = 0 ;
//         if(last_activity != 1)
//             point2 += mat[ith][1] + point(ith+1 , mat , 1 , dp) ;
//         //learn
//         int point3 = 0 ;
//         if(last_activity != 2)
//             point3 += mat[ith][2] + point(ith+1 , mat , 2 , dp) ;
        
//         return dp[ith][last_activity] = max({point1 ,point2 ,point3} ) ;
        
//     }
//     int maximumPoints(vector<vector<int>>& mat) {
//         // code here
//         int n = mat.size() ;
//         vector<vector<int>> dp(n+1 , vector<int>(4,-1)) ;
//         return point(0 , mat , 3 , dp) ;
//     }
// };



// // using tabulation dp

// class Solution {
//   public:    
//     int maximumPoints(vector<vector<int>>& arr) {
//         // code here
//         int n = arr.size() ;
//         vector<vector<int>> dp(n+1 , vector<int>(4,-1)) ;
//         // return point(0 , mat , 3 , dp) ;
        
//         dp[n][0] = 0 ; 
//         dp[n][1] = 0 ; 
//         dp[n][2] = 0 ;
//         dp[n][3] = 0 ;
        
//         for(int i = n-1 ; i >= 0 ; i--){
//             for(int last = 0 ; last < 4 ; last++ ){
                
//                 // run
//                 int point1 = 0 ;
//                 if(last != 0){
//                     point1 += arr[i][0] + dp[i+1][0] ;
//                 }
//                 // fight
//                 int point2 = 0 ;
//                 if(last != 1){
//                     point2 += arr[i][1] + dp[i+1][1] ;
//                 }
//                 //
//                 //learn
//                 int point3 = 0 ;
//                 if(last != 2){
//                     point3 += arr[i][2] + dp[i+1][2] ;
//                 }
//                 dp[i][last] = max({point1,point2,point3}) ;
//             }
//         }
//         return dp[0][3] ;       
//     }
// };