#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v = {2,3,3,4,4,4,4,7} ;
    int n = 4 ;
    int l = 0 , h = v.size() - 1 ;
    int upper_bound = -1 ;
    while(l <= h){
        int idx = (l+h)/2 ;
        if(n < v[idx]){
            h = idx-1 ;
            upper_bound = idx ;
        }
        else{
            l= idx+1 ;
        }
    }
    int lower_bound = -1 ;
    l = 0 , h = v.size() - 1 ;
    while(l <= h){
        int idx = (l + h)/2 ;
        if(v[idx] >= n){
            h = idx - 1 ;
            lower_bound = idx ;
        }
        else{
            l = idx + 1 ;
        }
    }
    cout << "Number of occ : " << upper_bound - lower_bound  << endl;
}