#include<bits/stdc++.h>
using namespace std ;
void reverse(int *arr , int sz){
    for(int i = 0 ; i < sz/2 ; i++){
        swap(arr[i] , arr[sz - i - 1]) ;
    }
}
void palindrome(int* arr , int sz){

    int newarr[sz] ;

    for(int i = 0 ; i < sz ; i++){
        newarr[i] = arr[i] ;
    }

    reverse(arr , sz) ;
    for(int i = 0 ; i < sz ; i++){
        if(arr[i] != newarr[i]){
            cout << "NOT EQUAL\n" ;
            return ;
        }
    }
    cout << "EQUAL\n" ;
}
void pal_optimised(int arr[] , int sz){
    for(int i = 0 ; i <= sz/2 ; i++){
        if(arr[i] != arr[sz - i - 1]){
            cout << "NOT PALINDREOME \n" ;
            return ;
        }
    }
    cout << "Palindrome\n" ;
}
int main(){
    int a[] ={1,2,3,2,1} ;
    int size = 5 ; 
    // palindrome(a , size) ;
    pal_optimised(a , size) ;

}