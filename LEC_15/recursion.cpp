#include<bits/stdc++.h>
using namespace std ;
void print_descending(int n){
    if(n <= 0)  return ;
    cout<< n << " ";
    print_descending(n-1) ;
}
void print_ascending(int n){
    if(n <= 0)  return ;
    print_ascending(n-1) ;
    cout << n << " ";
}
int main(){
    // print_descending(5) ;
    print_ascending(5) ;
}