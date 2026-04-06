#include<bits/stdc++.h>
using namespace std; 


// IMPLEMENTATION OF STACK USING LINKED LIST
class node{
    public : 
    int data ;
    node *next ; 
    node(){
        int data = 0 ;
        node *next = NULL ;
    }
    node(int val){
        data = val ;
        next = NULL ;
    }

};

class stackLL{ 
    int sz = 0 ; 
    node *head = NULL ;
    public : 
    

    void push(int val){

        // Insert at beg

        node *nn = new node(val) ;

        nn -> next = head ;
        head = nn ;

        sz ++ ;
    }
    void pop(){
        if (head == NULL){
            cout << "Stack is empty\n" ;
            return ;
        }
        node *nn = head ;
        head = head -> next ;

        delete nn;
        sz -- ; 
        return ;
    }
    int size(){
        return sz ;
    }
    bool isEmpty(){
        if(sz == 0)   return true; 
        return false ;
    }
    int top(){
        if(head == NULL or sz == 0){
            cout << "Stack is Empty\n" ;
            return -1 ;
        }
        else{
            return head -> data ;
        }
    } 
};
int main(){
    stackLL mystack ;
    mystack.push(10) ;
    mystack.push(5) ;
    mystack.push(1) ;

    cout << "top element : " <<mystack.top()<< endl ; ;

    cout << "size : "<< mystack.size() << endl ; ;

    mystack.pop() ;
    cout <<"top element : " << mystack.top() << endl ;;

    mystack.pop() ;
    cout << "is Empty(0-false || 1-true)" << mystack.isEmpty() << endl ;
    mystack.pop() ;
    cout <<"is Empty(0-false || 1-true)" <<  mystack.isEmpty() << endl ;
    mystack.pop() ;
    cout <<"top element : " << mystack.top() << endl ;;
}