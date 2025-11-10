#include<bits/stdc++.h>
using namespace std ;

//  TC -> O(2^N)
void print_subsequence(vector<int> &v , int idx ,vector<int> &ans){
    if(idx == v.size()){
        for(auto i : ans){
            cout << i << " " ;
        }
        cout << endl ;
        return ;
    }

    // include
    ans.push_back(v[idx]) ;
    print_subsequence(v , idx+1 , ans) ; 

    // not include
    ans.pop_back() ;
    print_subsequence(v , idx+1 , ans) ;

}
int main(){
    vector<int> v ={1,2,3} ;
    int idx = 0 ;
    vector<int> ans ;
    print_subsequence(v , idx , ans) ;
}