#include<bits/stdc++.h>
using namespace std ;

// brute force - O(N)
// int main(){
//     int n = 49 ;
//     int ans = -1 ;
//     for(int i = 1 ; i <= n ; i++ ) {
//         if( i*i > n){
//             break ;
//         }
//         ans = i ;
//     }
//     cout << ans << endl ;
// }

// binary search - O(logN)
int main(){
    int n = 49 ;
    int l = 1 , h = n ; 
    int ans = -1 ;
    while(l <= h){
        int mid = (l+h)/2 ;
        int sq = mid*mid ;
        
        if(sq <= n){
            ans = max(ans , mid) ;
            l = mid+1 ;
        }

        else {
            h = mid - 1 ;
        }
    }
    cout << ans << endl ;
}