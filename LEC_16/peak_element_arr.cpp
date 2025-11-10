#include<bits/stdc++.h>
using namespace std ;

//  Multiple peak display
vector<int> brute_force(vector<int> &v){
    int n = v.size() ;
    vector<int> ans;
    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            if(v[i] > v[i+1]){
                ans.push_back(v[i]) ;
            }
        }
        else if(i == n - 1){
            if(v[i] > v[i - 1]){
                ans.push_back(v[i]) ;
                break ;
            }
        }
        else if(v[i] > v[i-1] and v[i] > v[i+1]){
            ans.push_back(v[i]) ;
        }
    }
    return ans ;
}

//  Single Peak
void optimised(vector<int> &v){
    // vector<int> v = {15,6,8,9,10,11,12,1,2,3} ;

    int l = 0 , h = v.size() - 1 ;
    int ans = -1 ;
    while(l <= h){
        int idx = (l+h)/2 ;
        
        if((v[idx] > v[idx - 1]) or idx == h ){
            l = idx + 1;
            ans = v[idx] ;
        }
        else if((v[idx] < v[idx - 1]) or idx == 0) {
            h = idx - 1 ;
            ans = v[idx] ;
        } 
    }
    cout << ans << endl ;

}


int main(){
    // vector<int> v ={1,2,3,2,4,5,6,3,2,1,2,7,3} ;
    // vector<int> ans = brute_force(v) ;
    // for(int i = 0 ; i < ans.size() ; i++){
    //     cout << ans[i] << " "; 
    // }
    // cout << endl ;
    vector<int> v = {5,6,8} ;
    optimised(v) ;
}