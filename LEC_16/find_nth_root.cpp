#include<bits/stdc++.h>
using namespace std ;
//BF TC - O(N*pow)
// for(int i = 1 ; i <= n ; i++){
//     int ans = 1 ; 
//     for(int j = 1 ; j <= r2 ; j ++){
//         ans *= i ;
//     }
//     if(ans == n){
//         cout << i << endl ;
//         break ;
//     }
// }

// using binary search TC - O(pow * log(n))
int main(){
    int n = 50 ; 
    int r1 = 3 ;
    int r2 = 2 ;
    int l = 1 , h = n ;
    int ans ;
    int num = 0;
    while(l <= h){
        int mid = (l+h)/2 ;
        ans = 1 ;
        for(int j = 1 ; j <= r2 ; j ++){
            ans *= mid ;
        }
        // cout << ans << " " ;
        if(ans > n){
            // ans = 1 ;
            h = mid - 1 ;
        }
        else if(ans == n){
            cout << mid <<endl;
            return 0 ;
        }
        else {
            num = max(mid,num) ;
            l = mid+1 ;
        }

    }
    cout << num << endl ;
}