#include<bits/stdc++.h>
using namespace std ;

// TOPICS :
// 1 -> DO WHILE 
// 2 -> FUNCTIONS 

int facrorial(int n){
    int fcat = 1 ;
    for(int i = 1 ; i <= n ; i ++){
        fcat = fcat * i ;
    }
    return fcat ;
}
void calmul(int a , int b){
    int result = a*b ;
    cout << result << endl ;
}
bool flag(int n){
    if (n%2 == 0){
        return true ;
    }
    return false ;
}
int main(){

    // DO WHILE LOOP
    // int a = 10 ;
    // do{
    //     cout << a << endl ;
    //     a-- ; 
    // }while(a<=5) ;

    // FUNCTIONS
    // int a = 190 ;
    // int b = 20 ;
    // calmul(a,b) ;
    // cout << facrorial(5)<< endl ;

    //EVEN ODD   -> 0 FALSE ; 1 TRUE
    bool val = flag(10) ;
    cout << val << endl ;
    // if(val == true){
    //     cout << "EVEN VALUE\n" ;
    // }
    // else{
    //     cout << "ODD VALUE\n" ;
    // }
}