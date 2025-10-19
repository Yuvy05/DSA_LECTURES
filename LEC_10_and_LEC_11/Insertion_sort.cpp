#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v = {4,3,2,1} ;
    int n = v.size() ;
    int i = 0 , j = i+1; 
    for(int i =0 ; i < n ; i++){
        int j = i ;
        while(j > 0 && v[j] < v[j - 1]){
            swap(v[j] , v[j-1]) ;
            j-- ;
        }
    }
    cout << "Sorted : " ;
    for(int i = 0 ; i < n ; i ++){
        cout << v[i] << " " ;
    }
    cout << endl ;
}