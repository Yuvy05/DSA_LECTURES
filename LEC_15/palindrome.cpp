#include<bits/stdc++.h>
using namespace std ;
bool pal(string &s , int i) {
    if(i >= s.size()/2 ) return true ;
    if(s[i] == s[s.size() - i - 1]){
        return pal(s , i+1) ;
    }
    return false;
}
int main(){
    string s = "noon" ;
    cout << pal(s , 0) ;
}