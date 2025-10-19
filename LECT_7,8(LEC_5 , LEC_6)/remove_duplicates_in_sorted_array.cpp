#include<bits/stdc++.h>
using namespace std ;
void duplicate(int *arr , int sz){
    cout << arr[0] << " " ;
    for(int i = 1 ; i < sz ; i++){
        
        if(arr[i] != arr[i-1]){
            cout << arr[i] << " " ;
        }
    }
}
int main(){
    int a[] = {1,1,2,2,3,4,4,4,4,5}; 
    int size = 10 ;
    duplicate(a , size) ;
}