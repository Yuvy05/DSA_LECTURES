#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a[10] = {5,6,7,8,9,10,11,12,13,14} ;

    // BRUTE FORCE : compare each element with its next element aand it should be smaller
    for(int i = 0 ; i < 10 ; i++){
        bool found = true; 
        for(int j = i + 1 ; j < 10 ; j ++ ){
            if(a[i] > a[j]){
                found = false ;
                break ;
            }
        }
        if(found == false){
            cout << "NOT SORTED\n" ;
            return 0 ;
        }
    }
    cout << "sorted\n" ;
}