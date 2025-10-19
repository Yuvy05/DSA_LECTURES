#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a[10] = {1,2,3,4,5,4,3,2,1,0} ;
    for(int i = 0 ; i < 10 ; i ++){
        bool found = false ;
        for(int j = 0 ; j < 10 ; j ++){
            if(a[i] == a[j] and i != j){
                found = true ;
                break ;
            }
        }
        if(found == false){
            cout << "single element is : " << a[i] << endl ; 
        }
    }
}