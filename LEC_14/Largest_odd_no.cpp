#include<bits/stdc++.h>
using namespace std ;
void bf(string s){
  int n = s.size() ;
    vector<int> sub ;
    for(int i = 0 ; i < n ; i++){
        string ns = "" ;
        for(int j = i ; j < n ; j++){
            ns += s[j] ;
            int num = stoi(ns) ;
            sub.push_back(num) ;
        }
    }
    int mx = 0 ;
    for(int i = 0 ; i < sub.size() ; i ++){
        if(sub[i] %2 == 1){
            mx = max(mx , sub[i]) ;
        }
    }
    cout << mx <<endl  ; 
}
void optimised(string s){
    int n = s.size() ;
    int idx = -1 ;
    for(int i = n -1 ; i >= 0; i--){
        int n = s[i] - '0' ;
        if(n%2 == 1){
            idx = i ;
            break ;
        } 
    }
    if(idx == -1){  cout << "No Odd \n" ; return;}
    for(int i = 0 ; i <= idx ; i++){
        cout << s[i] ;
    }
    cout <<endl  ;
}
int main(){
    string s = "1253468" ;
    // bf(s) ;
    optimised(s) ;
}