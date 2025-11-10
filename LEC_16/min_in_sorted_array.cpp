#include<bits/stdc++.h>
using namespace std ; 
int main(){
    vector<int> v = {2,3,4,5,6,7,8,9,1};
    int n = 5 ;
    int l = 0 , h =v.size() - 1;
    int ans = INT_MAX ;
    while(l <= h){
        if(v[l] <= v[h]){
            cout << v[l] << endl ;
            return 0;
        }
        int mid = (l+h)/2 ;
        if(v[l] <= v[mid]){
            // left sorted
            ans = min(ans , v[l]) ;
            l = mid + 1 ;
        }
        else if(v[mid] < v[l]){
            // right part sorted
            ans = min(ans ,v[mid]) ;
            h = mid - 1 ;
        }
        else{
            ans = min(ans , v[l]) ;
        }
    }
    cout << ans << endl;
}