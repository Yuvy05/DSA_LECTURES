#include<bits/stdc++.h>
using namespace std ;
// O(n+m)
int main(){
    vector<vector<int>> v = {{1,4,7,11,15} ,
                             {2,5,8,12,18} ,
                             {3,6,10,13,19} ,
                             {10,12,14,17,20} ,
                             {16,17,21,27,30}
    } ;
    int k = 30 ;
    int n = v.size() , m = v[0].size() ;
    int r = 0 , c = m - 1 ;
    while(r < n and c >= 0){
        if(v[r][c] == k){
            cout << "found \n" << "at "<< r << " " << c ;
            return 0 ;
        }
        else if(k > v[r][c]){
            r+=1 ;
        }
        else{
            c-=1 ;
        }
    }
    cout << "Not found\n" ;
}
