#include<bits/stdc++.h>
using namespace std ;

// important
void csum(vector<int> &v , int target_sum , int idx , vector<int> &ans ){
    if(target_sum == 0){
        cout << endl;
        for(auto i : ans){
            cout << i << " " ;
        }
        cout <<endl << endl;
        return ;
    }
    if (idx == v.size()){
        return ;
    }
    if(target_sum < 0){
        return ;
    }
    // not included
    cout << idx << ": not included " <<endl;
    csum(v , target_sum , idx + 1, ans) ; 

    // included
    ans.push_back(v[idx]) ;
    cout << v[idx] << ": included target sum : "<< target_sum - v[idx] << endl;
    csum(v , target_sum - v[idx], idx,ans );
    ans.pop_back() ;
}
int main(){
    // vector<int> v = {1,2,3,7,4} ;
    vector<int> v = {1,2,3} ;
    vector<int> ans ;
    int target_sum = 3 ;
    int idx = 0 ;
    csum(v , target_sum , idx , ans ) ;
}