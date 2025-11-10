#include<bits/stdc++.h>
using namespace std;


// subsequence 
// void solve(vector<int> &v , int idx , vector<int> &ans){
//     if(idx == v.size()){
//         for(auto i : ans){
//             cout << i << " " ;
//         }
//         cout << endl ;
//         return ;
//     }


//     // pick
//     ans.push_back(v[idx]) ;
//     solve(v , idx+1 , ans) ;

//     // not pick 
//     ans.pop_back() ;
//     solve(v , idx+1 , ans) ;
// }
// int main(){
//     vector<int> v = {1,2,2,3} ;
//     int idx = 0 ; 
//     vector<int> ans ; 
//     solve( v ,idx , ans) ;
// }
void solve(vector<int> &v , int idx , vector<int> & curr , set<vector<int>> &ans){

    // base case
    if(idx == v.size()){
        // for(auto i  : ans){
        //     cout << i << " " ;
        // }
        // cout << endl ;
        ans.insert(curr) ;
        return ;
    }

    // pick 
    curr.push_back(v[idx]) ;
    solve(v , idx+1 ,curr ,  ans  );

    //not pick
    curr.pop_back() ;
    solve(v, idx +1 ,curr , ans );
}
int main(){
    vector<int> v = {1,2,2,3} ; 
    int idx = 0 ;
    set<vector<int>> ans ; 
    vector<int> curr ; 
    solve(v , idx ,curr ,  ans) ;
    for(auto i : ans){
        for( auto j : i){
            cout << j <<  " " ;
        }
        cout << endl ;
    }
}