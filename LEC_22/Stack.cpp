#include<bits/stdc++.h>
using namespace std ;
class mystack{
    
    private : 
     int sz = 1000;
    int i = -1;
    // int arr[1000] ;
    int *arr ;

    public :

    mystack(){
        arr = new int[sz] ;
    }
    mystack(int szc){
        arr = new int[szc] ;
        sz = szc ;
    }
    ~mystack(){
        delete arr ;  
    }
    //  O(1)
    void push(int x){
        if(i == sz -1){
            cout << "stack full\n" ;
            return ;
        }
        i+= 1 ;
        arr[i] = x ; 
    }
    //  O(1)
    int pop(){
        if(i == -1){
            cout << "stack empty\n";
            return INT_MAX ;
        }
        int val = arr[i] ;
        i-=1 ;
        return val ;
    }
    //  O(1)
    int top(){
        if(i == -1){
            cout << "Stack empty\n" ;
            return INT_MAX ;
        }
        return arr[i] ;
    }

};
int main(){ 

    mystack s(0) ;
    s.push(15) ;
    s.push(10) ;
    s.push(20) ;

    cout << s.top() << endl ;
    // cout << s.pop() << endl ;
    // cout << s.top() << endl ; 
    // cout << s.pop() << endl ;
    // cout << s.pop() << endl ;
    // cout << s.pop() << endl ;

    // const int x = 6 ;
    // cout << x << endl ;
    // x = 13 ; // error cant change const value 
    // cout << x << endl ;

    // stack<int> s;
    // s.push(4) ;
    // s.push(3) ;

    // cout << s.top() << endl ;
    // s.pop() ; 
    // cout << s.top() << endl ; 

     
}