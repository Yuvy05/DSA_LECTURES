#include<bits/stdc++.h>
using namespace std ;

// using sorting
// O(nlogn)
void opt1(string a , string b){
    sort(a.begin() , a.end()) ;
    sort(b.begin() , b.end()) ;
    if(a == b){
        cout <<"Yes\n" ;
        return ;
    }
    cout << "No\n" ;
}

// using map
// O(nlogn)
void opt2(string a , string b){
    map<char,int> mp ;
    for(auto i : a){
        mp[i] ++ ;
    }
    for(auto i : b){
        if(mp.find(i) != mp.end()){
            mp[i] --;
        }
        if(mp[i] == 0) mp.erase(i) ;
    }
    if(!mp.empty()){
        cout << "not anagram\n" ;
        return ;
    }
    cout << "anagram\n" ;
}

// storing using vectors
// O(N) 
void opt(string a , string b){
    vector<int>v(26,0) ;
    for(int i = 0 ; i < a.size() ; i++){
        v[a[i] - 'a']++ ; 
    }

    for(int i = 0 ; i < b.size() ; i++){
        v[b[i] - 'a']-- ;
    }

    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] != 0){
            cout << "NOT ANAGRAM\n" ;
            return ;
        }
    }
    cout << "ANAGRAM\n" ;
}
int main(){
    string s1 = "abc" ;
    string s2 = "cab" ;
    // opt1(s1,s2) ;
    // opt2(s1,s2) ;
    opt(s1,s2) ;
}