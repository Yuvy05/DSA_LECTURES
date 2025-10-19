#include<bits/stdc++.h>
using namespace std ;
void brute_force_move(int *arr , int n ){
    int temp[n] ;

    for(int i = 0 ; i < n ; i++){           // for putting all values as zero
        temp[i] = 0 ;
    }

    int i = 0 , j = 0; 
    while(i != n){
        if(arr[i] != 0){
            temp[j] = arr[i] ;
            j++ ;
        }
        i++ ;
    }
    for(int i = 0 ; i < n ; i++){
        cout << temp[i] << " " ;
    }
    cout << endl;
}
void optimised_move(int *arr , int n){
    int j = 0; 

    for(int i = 0 ;  i < n ; i++){
        if(arr[i] == 0){
            j = i ;
            break ;
        }
    }
    for(int i = j+1  ; i < n ; i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[j]) ;
            j++;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
    int arr[] = {1,0,0,2,3,0} ;
    int n = 6 ;
    // brute_force_move(arr , n) ;
    optimised_move(arr, n) ;
    
}