#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a[10] = {15,5,19,20,17,18 ,31 , 31} ;
    int max1 = INT_MIN , max2 = INT16_MIN ;
    for(int i = 0 ; i < 10 ; i++){
        if(a[i] > max1){
            max2 = max1 ;
            max1 = a[i] ;
        }
        else if(a[i] > max2 and a[i] != max1){
            max2 = a[i] ;
        }
    }
    cout << "Largest : " << max1 << endl ;
    cout << "2nd Largest : " << max2 << endl ;

}