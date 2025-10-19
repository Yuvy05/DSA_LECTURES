//SUM OF TWO NUMBERS
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
Node* insertFront(Node* head, int data){

    Node* newNode = new Node(data) ;
    newNode -> next = head ;
    head = newNode ;
    return head ;
}
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
Node* insertAtVal(Node* head , int data , int valmatch){
    Node* temp = head ;
    while(temp -> data != valmatch){
        temp = temp -> next ;
    }
    if(temp == NULL){
        cout << "element not there" ;
    }
    else{
        Node* newNode = new Node(data) ;
        newNode-> next =temp -> next  ;
        temp -> next = newNode ;
    }
    return head ;
}
Node* insertAtPos(Node* head , int data , int pos){
    Node* temp = head ;
    int ctr = 1 ; 
    while(temp != NULL){
        if (ctr == pos - 1){
            break ;
        }
        else{
            ctr++ ;
            temp = temp -> next ;
        }
    }
    if(temp == NULL){
        cout << "element not there" ;
    }
    else{
        Node* newNode = new Node(data) ;
        newNode-> next =temp -> next  ;
        temp -> next = newNode ;
    }
    return head ;
}
Node* deleteAtBegin(Node* head){
    if (head == NULL){
        return NULL ;
    }
    Node* temp = head ;
    head = head -> next ;
    delete temp ;
    return head ;
}
Node* deleteAtEnd(Node* head){
    if (head == NULL){
        return NULL ;
    }
    if (head -> next == NULL){
        delete head ;
        return NULL ;
    }
    Node* temp = head ; 
    while(temp -> next -> next != NULL){
        temp = temp -> next ;
    }
    Node* temp2 = temp -> next  ;
    temp -> next = NULL ;
    delete temp2 ;
    return head ;
}
Node* deleteSpecificElem(Node* head , int val){
    if (head == NULL){
        return NULL ;
    }
    if(head -> next == NULL){
        if (head -> data == val){
            delete head ;
            return NULL ;
        }
        else{
            return head ;
        }
    }

    if (head -> data == val){
        Node* curr = head ;
        head = head -> next ;
        delete curr ;
        return head ;
    }
    Node* curr = head ;
    Node* prev ;
    while (curr != NULL){
        if(curr -> data == val){
            break ;
        }
        prev = curr ;
        curr = curr -> next ;
    }
    if(curr == NULL){
        cout << "ELEMENT Not Found /n" ;
        return head ;
    }
    prev -> next = curr -> next ;
    delete curr ;
    return head ;
}
void traverse(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next ;
    }
    cout << endl ;
}
void search(Node* head , int data){
    while(head != NULL){
        if( head -> data == data){
            cout << "Found : " ;
            cout << head -> data << " ";
            return ;
        }
        head = head -> next ;
    }
    cout << "NOT FOUND :" ;
    
}
int main(){
    Node* head = NULL ;
    head = insertFront(head,5) ;
    head = insertFront(head,10) ;
    head = insertEnd(head,100) ;
    head = insertEnd(head, 20) ; 
    head = insertAtVal(head,101,100) ;
    head = insertAtPos(head , 4 , 4) ;
    traverse(head) ;

    // head = deleteAtBegin(head) ;
    // traverse(head) ;
    // head = deleteAtEnd(head) ; 
    // head = deleteAtEnd(head) ;
    // traverse(head) ;

    head = reverseSLL (head) ;

    // head = deleteSpecificElem(head , 10) ;
    traverse(head) ;
    // search(head , 200) ;

}