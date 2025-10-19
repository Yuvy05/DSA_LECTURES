#include<bits/stdc++.h>
using namespace std ;
bool rot(string s , string goal){
    if(s.size() != goal.size()) return false;
    string ns = s+s ;
    if(ns.find(goal) != string :: npos) {return true ;}
    return false;  
}
int main(){
    string s = "abcde" ;
    string goal = "cdeab" ;
    cout << rot(s,goal) ;
}
