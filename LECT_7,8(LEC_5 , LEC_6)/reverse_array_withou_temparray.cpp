#include<bits/stdc++.h>
using namespace std ;
void swap (int &a , int &b){
    int temp = a ;
    a = b ;
    b = temp ;
}
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10} ;
    int size = 10 ; 
    for(int i = 0 ; i <= size/2 ; i++){
        swap(a[i] , a[size - i - 1]) ;
    }
    
    for(int i = 0 ; i < 10 ; i++){
        cout << a[i] << endl ;
    }
}