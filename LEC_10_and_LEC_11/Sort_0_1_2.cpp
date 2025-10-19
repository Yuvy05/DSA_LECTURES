#include<bits/stdc++.h>
using namespace std ;
void using_map(vector<int> v){

    // TC -> O(N*LOG(M))
    map<int, int>fr; 
    for(int i = 0 ; i < v.size() ; i++){        // loop ka O(N)
        fr[v[i]] ++ ;       // Map ko access kar ka O(log(M))
    }
    for (auto it : fr){
        for(int i = 0 ; i < it.second ; i++){
            cout << it.first << " " ;
        }
    }
    cout << endl ;
}
void optimised(vector<int> v){
    int ct0 = 0 , ct1 = 0 , ct2 = 0 ; 
    for(int i = 0 ; i < v.size() ; i++){        // O(N)
        if(v[i] == 0){
            ct0 ++;
        }
        else if(v[i] == 1){
            ct1 ++; 
        }
        else{
            ct2 ++ ;
        }
    }

    for(int i = 0 ; i < ct0 ; i++){
        cout << 0 << " "; 
    }
    for(int i = 0 ; i < ct1 ; i++){
        cout << 1 << " "; 
    }
    for(int i = 0 ; i < ct2 ; i++){
        cout << 2 << " "; 
    }
}
int main(){
    vector<int> v = {0,1,0,1,2,1} ;
    using_map(v) ;
    optimised(v) ;

}