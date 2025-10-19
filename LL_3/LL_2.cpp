#include<bits/stdc++.h>
using namespace std ;

// STACK USING singly LINKED LIST
class Node{
    public :
    int data ;
    Node* next ;
    Node(){
        data = 0;
        next = NULL ;
    }
    Node(int data){
        this -> data = data ;
       next = NULL ;
    }
};
class Stack{
    private:
    int size = 0 ;
    Node* head = NULL ;
    public :
    void push(int data){
        Node* newNode = new Node(data) ;
        newNode -> next = head ;
        head = newNode ;
        size ++ ;
        cout << "Pushed Element : " << head -> data << endl ;
    }
    void pop(){
        if (head == NULL){
            cout << "Stack Empty " <<endl ;
            return ;
        }
        // one element
        if (head -> next == NULL){
            cout << "Popped value : " << head -> data << endl  ;
            size -- ;
            delete head ;
            return ;
        }

        //more than one element
        Node* curr = head ;
        head = head -> next ;
        cout << "Popped value : " << curr -> data << endl  ;
        size -- ;
        delete curr ;
    }
    void Size(){
        cout << "Size : " << size << endl ; 
    }
    void top(){
        if (head == NULL){
            cout << "ITS EMPTY :\n" ;
            return ;
        }
        cout << "Top is :" << head -> data <<endl ;
    }
    void isEmpty(){
        if (size == 0)
        cout << "It is empty \n" <<endl ;
        return ;
    }

};

int main(){
    Stack mystack ;
    mystack.push(5) ;
    mystack.push(10) ;
    mystack.push(15) ;
    mystack.push(20) ;
    mystack.Size() ;
    mystack.top();
    mystack.pop() ;
}