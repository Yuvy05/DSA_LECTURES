#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v = {6, 7, 8, 1, 2, 3, 4, 5};
    int n = 7 ;
    int l = 0 , h = v.size() - 1 ;
    while(l <= h){
        int idx = (l+h)/2 ;
        if (v[idx] == n){
            cout << "Found \n" ;
            return 0;
        }
        if(v[idx] < v[l]){
            // right side sorted
            if(n >= v[idx+1] and n <= v[h]){
                l = idx+1 ;
            }
            else{
                h = idx - 1 ;
            }
        }
        else{
            //   left side sorted
            if(n >= v[l] and n <= v[idx]){
                h = idx-1 ;
            }
            else{
                l = idx + 1 ;
            }
        }
    }
    cout << "not found \n" ;
}


