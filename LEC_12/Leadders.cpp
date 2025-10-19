#include<bits/stdc++.h>
using namespace std ;
void bruteforce(vector<int> v){
    
    //  TC -> O(N^2)
    //  SC -> O(N)
    vector<int> ans ;
    for(int i = 0 ; i < v.size() ; i++){
        bool found = true ;
        for(int j = i + 1 ; j < v.size() ; j++){
            if(v[j] > v[i]){
                found = false ;
            }
        }
        if(found == true){
            ans.push_back(v[i]) ;
        }
    }

    cout << "Leaders : " ;
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " " ;
    }
    cout << endl ;
}
void optimised(vector<int> v){
    vector<int> ans ;
    int max = INT_MIN ;
    for(int i= v.size() - 1 ;i >= 0 ;i--){
        if(v[i] > max)  {
            max = v[i] ;
            ans.push_back(max) ;
        }
    }
    cout << "Leaders : " ;
    for(int i = ans.size()-1 ; i >= 0 ; i--){
        cout << ans[i] << " " ;
    }
    cout << endl ;

}
int main(){
    vector<int> v = {3,8,1,2,0} ;
    // bruteforce(v) ;
    optimised(v) ;
}