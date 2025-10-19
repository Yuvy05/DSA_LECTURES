#include<bits/stdc++.h>
using namespace std ;
class Node{
    public :
    int data ;
    Node* next ;
    Node* prev ;
    Node(){
        int data = 0 ;
        Node* next = NULL ;
        Node* prev = NULL;
    }
    Node(int data){
        this-> data = data ;
        Node* next = NULL ;
        Node* prev = NULL;   
    }
    Node(int data , Node* next , Node* prev){
        this->data = data ;
        this -> next = next ;
        this -> prev = prev ; 
    }
} ;
void forwardTraverse(Node*head){
    while (head != NULL){
        cout << head -> data << " " ;
        head = head -> next ;
    }
}
void backwardTraverse(Node* tail){
    Node *curr = tail ;
    while(curr != NULL){
        cout << curr -> data << " " ;
        curr = curr -> prev ;
    }
}
void forwardSearch(Node* head , int data){
    Node* curr = head ;
    while (curr != NULL){
        if(curr -> data == data){
            cout << "FOUND :" ;
            return ;
        }
        curr = curr -> next ;
    }
    cout << "Element NOF FOUND" ;
}
pair<Node* , Node*> insertAtBegin(Node* head , Node* tail , int data){

    Node* newNode = new Node(data) ;

    if (head == NULL){
        head = tail = newNode ;
        return { head , tail } ;
    }
    newNode -> next = head ;
    head -> prev = newNode ;
    head = newNode ;
    return {head , tail} ;
}

pair <Node* , Node*> insertAtEnd(Node* head , Node* tail ,int data){
    Node* newNode = new Node(data) ;
    if (tail == NULL){
        head = tail = newNode ;
        return {head , tail} ;
    }
    tail -> next = newNode ;
    newNode -> prev = tail ;
    tail = newNode ; 
    return {head , tail} ;
}
pair <Node* , Node*> insertAtPos(Node* head , Node* tail , int data , int pos){

    int ctr = 1 ;
    Node* newNode = new Node(data) ;
    Node* curr = head ;
    while (curr != NULL){
        if(pos == 1){
            newNode -> next = curr ;
            curr -> prev = newNode ;
            head = newNode ;
            return{head , tail} ;
        }
        if(ctr == pos - 1){
            if(curr -> next != NULL){
                newNode -> prev = curr ;
                newNode -> next = curr -> next ;
                curr -> next = newNode ;
                newNode -> next -> prev = newNode ;
                return {head,tail} ;
            }
            else{
                tail = newNode ;
                newNode -> prev = curr ;
                curr -> next = newNode ;
                return {head,tail} ;
            }
        }
        curr = curr -> next ;
        ctr ++ ; 
    }
    cout << "Invalid position \n" ;
    delete newNode ; 
    return {head , tail} ;
}
pair <Node* , Node*> deleteAtBegin(Node* head , Node* tail){
    // No Element
    if (head == NULL){
        return {head , tail} ;
    }
    // One Element   
    if(head -> next == NULL){
        delete head ;
        return{NULL , NULL} ;
    }
    //More than One Element
    Node* newNode = head ;
    head = newNode -> next ;
    head -> prev = NULL ;
    delete newNode ;
    return {head , tail} ;
}
pair <Node* , Node*> deleteFromEnd(Node* head , Node* tail){
    //0 element
    if (tail == NULL){
        return {NULL , NULL} ;
    }
    // 1 element
    Node* newNode = tail ;
    if(tail-> prev == NULL){
        delete newNode ;
        return{NULL , NULL} ;
    }
    tail = tail -> prev ;
    tail -> next = NULL ;
    delete newNode ;
    return {head , tail} ;
}
pair <Node* , Node*> deleteAtPos(Node* head , Node* tail , int pos){
    if (head == NULL){
        return{head , tail} ;
    } 
    int ctr = 1 ;
    Node* curr = head ;
    while(curr != NULL){
        if(pos == 1) {
            if(head -> next == NULL){
                delete curr ;
                return {NULL , NULL} ;
            }
            head = head -> next ;
            head -> prev = NULL ;
            delete curr ;
            return {head , tail} ;
        }
        if (ctr == pos - 1){
            if(curr -> next == NULL){
                cout << "\nPosition is Invalid \n" ;
                return {head , tail} ; 
            }
            if (curr -> next -> next ==NULL){
                Node* temp = curr -> next ;
                tail = curr ;
                curr -> next = NULL ;
                delete temp ;
                return {head , tail} ;
            }
            Node* temp = curr -> next ;
            curr -> next = curr -> next -> next ;
            curr -> next -> prev = curr ;
            delete temp ;
            return {head,tail} ;
        }
        curr = curr -> next ;
        ctr ++ ;
    }
    return {head ,tail} ;
}
void middleElement_BF(Node* head ){
    int len = 0 ;
    int ctr = 1 ;
    Node* curr = head ;
    while (curr != NULL){
        len++ ;
        curr = curr -> next ;
    }
    curr = head ;
    if (len%2 == 0){
        while(ctr != len/2 + 1){
            curr = curr -> next ;
            ctr ++ ;
        }
        cout << "\nMiddle Element is : " << curr -> data << endl ;
        return ;
    }
    else{
        while(ctr != (len + 1) / 2 ){
            curr = curr -> next ;
            ctr ++ ;
        }
        cout << "\nMiddle ELement is : " << curr -> data <<endl ;
    }
}
void middleElement_tort(Node* head){
    Node* tort = head ;
    Node* rabbit = head ;
    while(rabbit -> next != NULL and rabbit -> next -> next != NULL){
        tort = tort -> next ;
        rabbit = rabbit -> next -> next ;
    }
    cout << "Middle Element is :" << tort -> data << endl ;
}
int main(){
    Node* head = NULL ;
    Node* tail = NULL ;
    pair<Node* , Node*> p = insertAtBegin(head , tail , 5) ;
    p = insertAtBegin(p.first , p.second , 4) ;
    p = insertAtBegin(p.first , p.second , 3) ;
    forwardTraverse(p.first) ;
    cout << endl ;
    p = insertAtEnd(p.first , p.second , 6) ;
    forwardTraverse(p.first) ;
    cout << endl ;
    p = insertAtPos(p.first , p.second , 7 , 5) ;
    p = insertAtEnd(p.first , p.second , 8) ;
    // p = insertAtEnd(p.first , p.second , 9) ;

    forwardTraverse(p.first) ;

    // backwardTraverse(p.second) ;
    // p = deleteAtBegin(p.first , p.second) ;
    // p = deleteFromEnd(p.first , p.second) ;
    // p = deleteAtPos(p.first , p.second , 3) ;
    // cout << "\nAFTER DELETION :" ;
    // forwardTraverse(p.first) ;
    middleElement_BF(p.first) ;
    middleElement_tort(p.first) ;    
}