#include<bits/stdc++.h>
using namespace std ;
int ct = 0 ;
// vector<int>dp(14 , -1) ;

// using memoization(top - down - approach)
// int fib(int n){
    
//     if(n == 1 or  n== 0 ){
//         return n ;
//     }
//     if(dp[n] != -1){
//         return dp[n] ;
//     }
//     ct += 1 ;
//     // cout << "function call : " << n << endl ;
//     return dp[n] = fib(n-1) + fib(n-2) ;
// }

// using tabulation 
// int tab(){
//     int n = 13 ;

//     // cout <<  fib(n) << endl ;
//     // cout << "Function calss : " << ct << endl;

//     // using tabulation(bottom - up - approach)
//     vector<int>dp(n+1 , -1) ;
//     dp[0] = 0 ;
//     dp[1] = 1 ;

//     for(int i = 2 ; i <= n ; i ++){
//         dp[i] = dp[i-1] + dp[i - 2] ;
//     }
//     cout << "result is : " << dp[n] << endl ;

// }


// using tabulation optimisation  -> TC for this case -> O ( 1 )
int main(){
    int n = 13 ;

    // cout <<  fib(n) << endl ;
    // cout << "Function calss : " << ct << endl;

    // using tabulation(bottom - up - approach)
    int prev = 1 ;
    int prev_to_prev = 0 ;
    int ans = 0 ;
    for(int i = 2 ; i <= n ; i ++){
        ans = prev + prev_to_prev ;
        prev_to_prev = prev ;
        prev = ans ;
    }
    cout << "result is : " << ans << endl ;

}