#include<bits/stdc++.h>
using namespace std ;
void rotate_arr_left_bruteForce(int *arr , int n){
    int temp[n] ; 
    for(int i = 0 ; i < n ; i++){
        temp[i] = arr[i+1] ;
    }
    temp[n-1] = arr[0] ;
    cout << "Rotated : " ;
    for(int i =0 ; i < n ; i++){
        cout << temp[i] << " " ; 
    }
    cout << endl ;

    //  TC -> O(N) 
    //  SC -> O(N)
}
void rotate_arr_left_optimised(int*arr , int n){
    int temp = arr[0] ;
    for(int i = 1 ; i < n  ; i++){
        arr[i-1] = arr[i] ;
    }
    arr[n-1] = temp ;
    cout << "Rotated  :" ;
    for(int i =0 ; i < n ; i++){
        cout << arr[i] << " " ; 
    }
    cout << endl ;

    //  TC -> O(N) 
    //  SC -> O(1)
}
void reverse_arr(int *arr , int lo , int hi ){
    while(lo < hi){
        swap(arr[lo], arr[hi]) ;
        lo++ ;
        hi -- ;
    }
}
void rotate_arr_left_by_n_moves(int *arr , int n , int d){
    reverse_arr(arr , 0 , d-1 ) ;
    reverse_arr(arr , d , n-1 ) ;
    reverse_arr(arr , 0 , n-1 ) ;
    cout << "Rotated  :" ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}
void rotate_arr_right_by_n_moves(int *arr , int n , int d){
    reverse_arr(arr , 0 , n-d-1) ;
    reverse_arr(arr , n-d , n-1) ;
    reverse_arr(arr , 0 , n-1) ;
    cout << "Rotated  :" ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}


int main(){
    int arr[5] = {1,2,3,4,5} ;
    int n = 5 ;
    cout << "original :" ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;

    // rotate_arr_left_bruteForce(arr , n) ;
    // rotate_arr_left_optimised(arr ,n) ;
    // rotate_arr_left_by_n_moves(arr , n , 2) ;
    rotate_arr_right_by_n_moves(arr , n , 2) ;
}