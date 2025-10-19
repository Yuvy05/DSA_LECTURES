#include<bits/stdc++.h>
using namespace std ;
void reverse(string s){
    for(int i = 0 ; i < s.size() ; i++){
        cout << s[s.size() - 1 - i] ;
    }
}
void pal(string s){
    for(int i = 0 ; i < (s.size()/2) ; i++){
        if(s[i] != s[s.size() - i - 1]){
            cout << "No\n" ;
            return ;
        }
    }
    cout << "Yes\n" ;
}
int main(){
    string s = "yuvraj shrama";
    // cin >> s ; 
    // getline(cin , s) ;
    s.push_back('1') ;

    cout << s <<endl  ;
    s.pop_back() ;
    cout << s ;
}