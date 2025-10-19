#include<bits/stdc++.h>
using namespace std ;
void brute_force(vector<int> v){

    //  TC -> O(N*LOG(N))
    //  SC -> O(N)
    map<int , int > fr ;
    for(int i = 0 ; i < v.size() ; i ++){
        fr[v[i]] ++ ;
    }
    bool found = false ;
    for(auto &val : fr){
        if(val.second > v.size()/2 ){
            cout << val.first << " " ;
            found = true ;
        }
    }
    if(found == false){
        cout << -1 << endl ;
    }
}
void moore_voting_algo(vector<int>v){
    int ct = 0 ; 
    int elem = -1 ;
    for(auto it : v){
        if(ct == 0){
            elem = it ;
            ct++ ;
        }
        else if(elem != it){
            ct-- ;
        }
        else{
            ct++ ;
        }
    }

    ct = 0 ;
    for(auto it : v){
        if(it == elem)  ct ++ ;
    }


    if(ct > v.size()/2)  cout << "Element is :" << elem ;
    else cout << "No element\n" ;
}
int main(){
    vector<int> v = {1,1,1,1,2,3,2} ;
    // brute_force(v) ;
    moore_voting_algo(v) ;
}