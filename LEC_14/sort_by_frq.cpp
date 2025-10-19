#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s = "abbaaacb" ;
    map<char , int> mp ;
    for(int i = 0 ; i < s.size() ; i++){
        mp[s[i]]++ ;
    }
    vector<pair<int , char>> v ;
    for(auto i : mp){
        v.push_back({i.second , i.first}) ;
    }
    sort(v.begin() , v.end()) ;
    for(auto i : v){
        for(int j = 0 ; j < i.first ; j++){
            cout << i.second ;
        }
    }
    
}