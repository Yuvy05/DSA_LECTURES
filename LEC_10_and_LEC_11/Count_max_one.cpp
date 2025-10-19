#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v = {0,1,0,1,1,1,0,0,0,1,1,0} ;
    int ct = 0 ; 
    int mx = 0 ;
    for(int i = 0 ; i < v.size() ; i++){
        
        if(v[i] == 1){
            ct++ ;
            mx = max(mx,ct) ;
        }
        else if(v[i] != 1){
            ct = 0 ;
        }
    }
    cout << "Max : " << mx << endl ;
}