#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s = "i love coding blocks" ;
    vector<string> ans ;
    string word ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] >= 'a' and s[i] <= 'z'){
            word.push_back(s[i]) ;
        }
        else{
            ans.push_back(word) ;
            word ="" ;
        }
    }
    ans.push_back(word) ;
    reverse(ans.begin() ,ans.end()) ;
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " " ;
    }
}