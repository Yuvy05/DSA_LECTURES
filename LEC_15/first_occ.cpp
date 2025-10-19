#include<bits/stdc++.h>
using namespace std ;

int first_occ(vector<int> &v , int l , int h ,  int n , int ans){
    int idx = (l + h)/2 ;
    // if(l == h and (n != v[idx] or n == v[idx]))  return idx ;
    if(l>h) return ans ;
    if(n == v[idx]){
        ans = idx ;
        return first_occ(v , l , idx - 1 , n , ans) ;
    }
    else if(n > v[idx]){
        return first_occ(v , idx+1 , h , n , ans) ;
    }
    else{
        return first_occ(v , l , idx - 1 , n , ans ) ;
    }
}
int main(){
    // vector<int> v = {1,3,3,6,9,10,10,14,18,22} ;
    vector<int> v = {1,3,3,3,4} ; // h =4
    
    int n = 5 ;
    int l = 0 , h = v.size() - 1 ;
    int ans = -1 ;
    cout << first_occ(v , l , h , n , ans) << endl  ;

}