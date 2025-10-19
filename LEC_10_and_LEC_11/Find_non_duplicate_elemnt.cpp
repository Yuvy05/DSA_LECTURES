#include<bits/stdc++.h>
using namespace std ;
void optimised_approach(vector<int> &v){

    //TC -> O(N)

    int xr = 0 ;
    for(int i = 0;  i< v.size() ; i++){
        xr = xr^v[i] ;
    }
    cout << "Missing Element is : " << xr << endl ;
}
void brute_force(vector<int> &v){

    //  TC ->O(N^2)

    for(int i = 0 ;i < v .size() ; i++){
        bool found = false ;
        for(int j = 0 ; j < v.size() ; j++){
            if(v[i] == v[j] and i != j){
                found = true ;
                break ;
            }
        }
        if(found == false ){
            cout << "Missing element is : " << v[i] << endl  ;
            return ;
        }
    }
}
void using_maps(vector<int> v){

    //  TC -> O(N*LOG(M))       LOG(M) :FOR MAP 
    //  SC -> O(M) 
    
    map<int , int> freq ;
    for(int i = 0 ; i < v.size() ; i++){
        freq[v[i]] ++ ;
    }

    for(auto &val : freq){
        if(val.second == 1){
            cout << "Missing element is : " << val.first << endl  ;
            break ;
        }
    }
}
int main(){
    vector<int> v = {1,2,1,3,4,3,2} ;
    // optimised_approach(v) ;
    // brute_force(v) ;
    using_maps(v) ;
}
