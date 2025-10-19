#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s = "(9+1)*((3+2)*((2+7)*(4+1)))" ;
    int mx = -1 ;
    int count = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '('){
            count ++ ;
            mx = max(mx,count) ;
        }
        else if(s[i] == ')'){
            count --;
        }
    }
    cout << mx ;
}