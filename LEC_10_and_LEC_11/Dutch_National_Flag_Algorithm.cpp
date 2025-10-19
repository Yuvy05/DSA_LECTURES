#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v = {1,0,0,2,1,1,0,1} ;
    int low = 0 , mid = 0 , high = v.size() - 1 ;
    while(mid <= high){
        if(v[mid] == 0){
            swap(v[mid] , v[low]) ;
            mid++ ;
            low++ ;
        }
        else if(v[mid] == 1){
            mid ++ ;
        }
        else{
            swap(v[mid] , v[high]) ;
            high -- ;
        }
    }
    for(int i =0 ; i < v.size() ; i++){
        cout << v[i] << " " ;
    }
    cout << endl ;
}