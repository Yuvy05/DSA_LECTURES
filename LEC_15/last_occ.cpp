#include<bits/stdc++.h>
using namespace std ;
// Using recursion in binary search
// int last_occ(vector<int> &v , int l , int h , int n , int ans){
//     int idx = (l + h)/2 ;
//     if(l > h)   return ans ;
//     if(n == v[idx]){
//         ans = idx ;
//         return last_occ(v , idx+1 , h , n ,ans) ;
//     }
//     else if(n > idx){
//         return last_occ(v , idx + 1 , h , n , ans) ;
//     }
//     else{
//         return last_occ(v , l , idx - 1 , n , ans) ;
//     }
// }
int main(){
    vector<int> v = {1,2,2,4} ;
    int n = 2 ;
    int ans = -1 ;
    int l = 0 , h = v.size() - 1 ;
    // cout << last_occ(v , l , h , n , ans) << endl ;

    // Without recursion in binary search
    while(l < h){
        int idx = (l + h)/2 ;
        if(n == idx){
            ans = idx ; 
            h = idx-1 ;
        }
        else if(n > idx){
            l = idx + 1 ;
        }
    }
    cout << ans <<endl ;
}