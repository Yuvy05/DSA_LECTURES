#include<bits/stdc++.h>
using namespace std ;

// Binary Search using recursion
// bool binary_search(vector<int> &v ,int lo , int h , int n){
//     int idx = lo + ((h - lo) / 2 );
//     if(lo == h and n != v[idx]) return false ;
//     else if(v[idx] == n){
//         return true ;
//     }
//     else if(n > v[idx]){
//         return binary_search(v ,idx+1 , h , n ) ;
//     }
//     else{
//         return binary_search(v, lo , idx-1 , n);
//     }
// }


// int main(){
//     vector<int> v = {1,2,3,4,5,6,7,8,9,10} ;
//     int n = 11 ;
//     bool val = binary_search(v , 0 , v.size() - 1 , n) ;
//     if(val == false){
//         cout << "NOT FOUND\n" ;
//     }
//     else{
//         cout << "FOUND\n" ;
//     }
// }


int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10} ;
    int n = 11 ;
    int lo = 0 , hi = v.size() - 1 ;
    while(lo <= hi){
        int idx = lo + (hi - lo)/2 ;
        if(n == v[idx]){
            cout << "Found\n" ;
            return 0;
        }
        else if(n > v[idx]){
            lo = idx + 1 ;
        }
        else{
            hi = idx - 1 ;
        }
    }
    cout << "Not found\n" ;
    

}