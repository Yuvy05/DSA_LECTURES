#include<bits/stdc++.h>
using namespace std ;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;
    int reverse[10] ;
    int j = 0 ;

    for(int i =9 ; i >= 0 ; i --){
        reverse[i] = arr[j] ;
        j++; 
    }
    for(int i = 0 ;i < 10 ; i++){
        cout << reverse[i] << endl  ;

    }
}