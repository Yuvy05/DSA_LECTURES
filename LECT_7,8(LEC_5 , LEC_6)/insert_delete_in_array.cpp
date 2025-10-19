#include<bits/stdc++.h>
using namespace std ;
void insert(int *arr , int n , int pos , int elem) {
    int a[n+1] ;
    int j = 0 ;
    for(int i = 0 ; i <n ; i ++){
        if(i == pos - 1){
            a[j] = elem ;
            j++;
        }
        a[j] = arr[i] ;
        j ++;
    }
    for(int i= 0 ; i < n+1 ; i++){
        cout << a[i] << " ";
    }
}
void deletee(int *arr , int size , int pos){
    int a[size+1] ;
    int j = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(i == pos - 1){
            continue ;
        }
        a[j] = arr[i] ;
        j++ ;
    }
    for(int i= 0 ; i < size-1 ; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n ; cin >> n ;
    int arr[n] ; 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    int elem , pos ; cin >> elem >> pos ;
    // insert(arr , n , pos , elem ) ;
    deletee(arr , n , pos) ;
}