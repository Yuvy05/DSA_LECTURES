#include<bits/stdc++.h>
using namespace std ;
void ts(vector<int> &v , int idx , vector<int> &ans , int sum , int target_sum){
    if( idx >= v.size()){
        if(sum == target_sum ){
            for(auto i : ans){
                cout << i << " " ;
            }
            cout << endl ;
            
        }
        return ;
    }

    // include
    sum += v[idx] ;
    ans.push_back(v[idx]) ;
    ts(v,idx+1,ans,sum,target_sum) ;

    // not include
    sum -= v[idx] ;
    ans.pop_back() ;
    ts(v,idx+1,ans,sum,target_sum) ;

}
int main(){
    vector<int> v = {1,2,3,4,7} ;
    int target_sum = 9 ;
    vector<int> ans ;
    int idx = 0 ;
    int sum = 0;
    
    ts(v ,idx , ans ,  sum , target_sum) ;
}