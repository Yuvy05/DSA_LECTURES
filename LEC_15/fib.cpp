#include<bits/stdc++.h>
using namespace std ;

// APPROACH : FIBONACCI SERIES
// void fib(int n , int curr , int prev , int c){

//     if(c == n){
//         return ;
//     }
    
//     cout<< curr + prev << " ";
//     fib(n , curr + prev , curr , c+1 ) ;

// }
// int main(){
//     int prev = 0 , curr = 1 ;
//     int n = 10 ;
//     if(n == 1){ cout << 0  << endl ; return 0;}
//     cout << prev << " " << curr << " " ;
//     fib(n , curr , prev , 2) ;
// }

// APPROACH : FIBONACCI NUMBER
int fib(int n){
    if(n == 0) return 0 ;
    if(n == 1) return 1 ;
    return fib(n-1) + fib(n-2) ;

}
int main(){
    int n = 5 ;
    cout << fib(1) << endl ;
    cout << fib(2) << endl ;
    cout << fib(3) << endl ;
    cout << fib(4) << endl ;
    cout << fib(5) << endl ;
}