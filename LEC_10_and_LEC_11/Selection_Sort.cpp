#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v = {3,4,1,2,7,5} ;
    int n = v.size() ;
    for(int i = 0 ; i < n - 1 ; i++){
        int min = i ;
        for(int j = i+1 ; j < n ; j++){
            if(v[j] < v[min]){
                min = j ;
            }
        }
        swap(v[i] , v[min] ) ;
    }
    cout << "Sorted is : " ;
    for(int i= 0 ; i < n ; i++){
        cout << v[i] << " " ;
    }
    cout << endl;
}