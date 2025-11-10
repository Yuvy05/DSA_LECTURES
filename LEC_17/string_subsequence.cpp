#include<bits/stdc++.h>
using namespace std ;
void print_subs(string &s , int idx , string &ans){
    if(idx == s.size()){
        cout << ans << endl ;
        return ;
    }
    // include
    ans.push_back(s[idx]) ;
    print_subs(s , idx+1 , ans) ;

    // not include
    ans.pop_back() ;
    print_subs(s,idx+1 , ans) ;
}
int main(){
    string s = "xyz" ;
    string ans = "" ;
    int idx = 0 ;
    print_subs(s , idx , ans) ;
}