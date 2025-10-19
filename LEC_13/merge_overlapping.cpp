#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<pair<int,int>> v = {{1,3} , {10,12} , {7,9} , {2,4} , {11,15} , {12,14}} ;
    sort(v.begin() , v.end()) ;
    vector<pair<int,int>> ans ;
    ans.push_back(v[0]) ;
    for(int i = 1 ; i < v.size() ; i++){
        if(v[i].first <= ans.back().second){
            ans.back().second = max(v[i].second , ans.back().second) ;
        }
        else{
            ans.push_back(v[i]) ;
        }
    }
    
    for(auto i : ans){
        cout << i.first << " " << i.second ;
        cout << endl ;
    }

}