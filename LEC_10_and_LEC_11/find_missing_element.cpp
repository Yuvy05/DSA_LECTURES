#include<bits/stdc++.h>
using namespace std ;
void brute_force(int *arr , int n){

    //  TC -> O(N^2)
    //  SC -> O(1)
   for(int i = 1 ; i <= n ; i++){
        int found = 0 ;
        for(int j = 0 ; j < n-1 ; j++){
            if(arr[j] == i){
                found = 1 ;
                break ;
            }
        }
        if(found == 0){
            cout << "elem is : " << i <<endl ;
            return  ;
        }
    }
}
void optimised_using_xor(int *arr , int n){
    int xr = 0 ;
    for(int i = 1 ; i <= n ;i++){
        xr = xr ^ i ;
    }
    for(int i = 0 ; i < n -1 ; i++){
        xr = xr ^ arr[i] ;
    }
    cout << "Element is : " << xr << endl ;
}
void optimised(int *arr , int n){

    //  TC -> O(N)
    //  SC -> O(1)
    int sum = (n/2.0)*(1 + n) ;
    int partial_sum = 0 ;
    for(int i = 0 ; i < n-1 ; i++){
        partial_sum += arr[i] ; 
    }
    cout << "ELEMENT IS :" << sum - partial_sum << endl;
}
int main(){
    int arr[] = {1,3,5,2} ;
    int n = 5 ;
    // brute_force(arr, n ) ;
    // optimised(arr , n ) ;
    optimised_using_xor(arr,n) ;
 
}