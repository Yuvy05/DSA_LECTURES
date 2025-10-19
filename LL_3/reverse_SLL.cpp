#include<bits/stdc++.h>
using namespace std ;

class Node{

    public: 
    int data ;
    Node* next ;
    Node(){
        data = 0 ;
        next = NULL ;
    }
    Node(int data){
        this->data = data ;
        next = NULL ;
    }
} ;
Node* insertEnd(Node* head , int data){

    Node* newNode = new Node(data) ;

    if (head == NULL){
        return newNode ;
    }
    else{
        Node* temp = head ;
        while (temp -> next != NULL){
            temp = temp -> next ;
        }
        temp -> next = newNode ;
        return head ;
    }
}

// REVERSE USING STACK 
// TC -> O(N) , SC -> O(N)
Node* reverseSLL(Node* head){
    if (head == NULL or head -> next == NULL){
        return head ;
    }
    Node* curr = head ;
    stack<int> st ;
    while(curr != NULL){
        st.push(curr -> data) ;
        curr = curr -> next ;
    }
    curr = head ;
    while(curr != NULL){
        curr -> data = st.top() ;
        st.pop() ;
        curr = curr -> next ;
    }
    return head ;
}

// REVERSE OPTIMISED
// TC -> O(N) , SC -> O(1)
Node* reverse_SLL(Node* head){
    if(head == NULL or head -> next == NULL){
        return head ;
    }
    Node* front = NULL ;
    Node* back = NULL ;
    Node* curr = head ;
    while(curr != NULL){
        front = curr -> next ;
        curr -> next = back ;
        back = curr ;
        curr = front ;
    }
    return back ;
}
void traverse(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next ;
    }
    cout << endl ;
}
int main(){
    Node* head = NULL ;

    head = insertEnd(head, 10) ;
    head = insertEnd(head, 20) ; 
    head = insertEnd(head, 30) ;
    head = insertEnd(head, 40) ; 

    traverse(head) ;

    // head = deleteAtBegin(head) ;
    // traverse(head) ;
    // head = deleteAtEnd(head) ; 
    // head = deleteAtEnd(head) ;
    // traverse(head) ;

    // head = reverseSLL (head) ;

    // head = deleteSpecificElem(head , 10) ;
    // search(head , 200) ;

    head = reverse_SLL(head);
    traverse(head) ;

}