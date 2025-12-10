#include<bits/stdc++.h>
using namespace std ;
class myqueue{

    private :
    vector<int> arr ;
    int sz = 10 ;
    int i = -1 ;
    int j = -1 ;

    public :
    myqueue(){
        arr.resize(sz) ;
    }
    void push(int x ){
        if(j == sz -1){
            cout << "Queue already full\n";
            return ;
        }
        if(j == -1){
            i = 0 ; // to make it point to the first element
        }
        
        j += 1 ;
        arr[j] = x ;
        
    } 
    void pop(){
        if(i > j or i == -1){
            cout <<"Queue is empty\n" ;
            return ;
        }
        i += 1 ;

    }
    int front(){
        if(i > j or i == -1){
            cout <<"Queue is empty\n" ;
            return -1 ;
        }
        return arr[i] ; 
    }

};
int main(){
    myqueue q ;
    q.pop() ;
    q.front() ;
    q.push(1) ;
    cout << q.front() << endl ;
    q.push(2) ;
    cout << q.front() << endl ;
    q.pop() ;
    cout << q.front() << endl ;
}