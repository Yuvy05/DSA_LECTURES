#include<bits/stdc++.h>
using namespace std ;
void using_map(vector<int>v , int t){

    //  TC -> O(N*LOG(N))
    //  SC -> O(N) ;
    map<int,int> mp ;
    for(int i = 0 ; i < v.size() ; i ++){
        mp[v[i]] = i  ;
    }
    int idx1 , idx2 ;
    bool found ;
    for(int i = 0 ; i < v.size() ; i++){
        int rem = t - v[i] ;
        found = false ;
        if(mp.find(rem) != mp.end()){
            idx1 = mp[rem] ;
            idx2 = i ;
            found = true ;
            break ;
        }
    }
    if(found == true){
        cout << "INDEX : " << idx1 << " " << idx2 << endl ; 
    }
    else{
        cout << "No\n" ;
    }
}
void optimised(vector<int> a , int t){

    //  TC -> O(N*LOG(N)) 
    //  SC -> O(N)
    vector<pair<int,int>> v ;
    for(int i = 0 ; i < a.size() ; i++){
        v.push_back({a[i] , i}) ;
    }
    sort(v.begin() , v.end()) ;
    int l = 0 , h = v.size() - 1 ;
    while(l < h){
        int sum = v[l].first + v[h].first ;
        if(sum == t){
            cout << "INDEX : " << v[l].second << " " << v[h].second << endl ;
            break; 
        }
        else if(sum < t){
            l ++;
        }
        else if(sum > t){
            h-- ;
        }
    }
}

int main(){
    vector<int> v = {2,5,7,3,4,9} ;
    int t = 16 ;
    // using_map(v , t) ;
    optimised(v , t) ;
 }