#include<bits/stdc++.h>
using namespace std ; 
int main(){

    // OPTIMISED USING 2 POINTERS
    // TC -> O(N)
    // SC -> O(1)
    vector<int> v = {3,2,-1,7,-2,3} ;
    // vector<int> v = {1,2,3,4} ;
    
    int n = v.size() ;
    int ans = INT_MIN;
    int k = 3 ;

    // OPTIMISED USING 2 POINTERS
    int sum = 0 ; 
    for(int i = 0 ; i < n and i < k ; i ++){
        sum+= v[i] ;
    }
    int l =0 ; 
    for(int r =k ; r < n ; r ++ ){
        sum += v[r] ;
        sum -= v[l] ;
        l++ ;
        ans = max(ans, sum) ;
    }
    cout << ans << endl ;

    //  OPTIMISED USING QUEUES
    //  TC -> O(N)
    //  SC -> O(K)
    // queue<int> q ;
    // int sum = 0;
    // for(int i = 0 ; i < n and i < k ; i ++){
    //     q.push(v[i]) ;
    //     sum+= v[i] ;
    // }
    // ans = sum ;
    // for(int i = k ; i < n ; i++){
    //     q.push(v[i]) ;
    //     sum += v[i] ;

    //     sum -= q.front() ;
    //     q.pop() ;
        
    //     ans = max(ans , sum ) ;
    // }
    // cout << ans << endl ;

    // q = {3,2,-1}

    //  BRUTE FORCE
    // TC -> O(N*K)
    // for(int i = 0 ; i < n ; i ++){
    //     int sum = 0 ; 
    //     for(int j = 0 ; j < k ; j++){
    //         if((i+j)<n){
    //             sum += v[i+j] ;
    //             ans = max(ans , sum) ;
    //         }else{
    //             break ;
    //         }
    //     }
    // }
    // cout << ans ;
}