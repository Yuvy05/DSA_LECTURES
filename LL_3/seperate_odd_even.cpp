#include<bits/stdc++.h>
using namespace std ;
class Node{
    public:
    int data ;
    Node* next ;
    Node(){
        int data = 0 ;
        next = NULL ;
    }
    Node(int data){
        this -> data = data ;
        next = NULL ;
    }
};
Node* insertAtBegin(Node* head , int data){

    Node* newNode = new Node(data) ;

    newNode -> next = head ;
    head = newNode ;
    return head ;
}

// TC -> O(N)
// SC -> O(N)
Node* seperate_BF(Node* head){
    vector<int> ev , od ;
    Node* curr = head ;
    while(curr != NULL){
        if(curr -> data % 2 == 0){
            ev.push_back(curr-> data) ;
        }
        else{
            od.push_back(curr -> data);
        }
        curr = curr -> next ;
    }
    curr = head ;
    for(int i = 1 ; i <= ev.size() and curr != NULL; i++){
        if(i == 1){
            head = curr;
        }
        curr -> data = ev[i-1] ;
        curr = curr -> next ;
    }
    for(int i = 1 ; i <= od.size() and curr != NULL; i++){
        curr -> data = od[i-1] ;
        curr = curr -> next ;
    }
    return head ;
}

//
Node* seperate_opt(Node*head){
    Node* odh = new Node(0) ;
    Node* evh = new Node(0) ;
    Node* odt = odh ;
    Node* evt = evh ;
    
    Node* curr = head ;
    while (curr != NULL){
        if (curr -> data % 2 == 0){
            evt -> next = curr  ;
            evt = evt -> next  ;
        } 
        else{
            odt -> next = curr ;
            odt = odt -> next ;
        }
        curr = curr -> next ;
    }
    evt -> next = odh -> next ;
    return evh -> next ;
}

void traverse(Node* head){
    Node* curr = head ;
    while (curr != NULL){
        cout << curr -> data << " " ;
        curr = curr -> next ;
    }
    cout << endl ;
}
int main(){
    Node* p = NULL ;
    p = insertAtBegin(p ,6 ) ;

    p = insertAtBegin(p ,2 ) ;

    p = insertAtBegin(p ,5 ) ;

    p = insertAtBegin(p ,4 ) ;

    p = insertAtBegin(p ,3 ) ;

    p = insertAtBegin(p ,1 ) ;

    traverse(p) ;

    // p = seperate_BF(p) ;
    p = seperate_opt(p) ;

    traverse(p) ;

}