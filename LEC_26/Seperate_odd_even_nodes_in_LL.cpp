#include<bits/stdc++.h>
using namespace std ;

class node{
    public : 
    int data ;
    node* next ;
    node(int data) {
        this->data = data ;
        next = NULL; 
    }
    node(int data , node* next){
        this -> data = data ;
        this -> next = next ;
    }
    node(){
        data = 0 ;
        next = NULL ;
    }
}; 
//O(1)
node* insertBeg(node*head , int data){

    node* newnode = new node(data) ;
    newnode -> next = head ;
    head = newnode ;
    return head ;
}

//O(N)
node *insertEnd(node *head , int data){

    node* newnode = new node(data) ;

    if(head == NULL){ //no element
        return newnode ;
    }

    node *temp = head ;
    while(temp -> next != NULL){
        temp = temp -> next ;
    }
    temp -> next = newnode ;
    return head ;
}

//O(N)
node *insertAtSpecificPosition(node*head , int data , int valmatch){
    node *newnode = new node(data) ;
    if(head == NULL){return newnode ;}
    node *curr = head ;
    while(curr != NULL and curr -> data != valmatch ){
        curr = curr -> next ;
    }
    if(curr == NULL){cout << "Value not found\n" ; return head ;}
    newnode -> next = curr -> next ;
    curr -> next = newnode ;

    return head ;
}

node *deleteFromBeg(node *head){
    if(head == NULL){ 
        return NULL ;
    }
    node *temp = head ;
    head = head->next ;

    delete temp;
    return head ;
}
node *deleteSpecificElement(node*head , int val){
    node *curr = head; 
    node *prev ;
    if(head == NULL){ 
        return NULL ;
    }
    if(head -> data == val){
        node *curr = head ;
        curr = curr -> next;
        delete head ;
        return curr ;
    }
    while(curr != NULL and curr -> data != val ){
        prev = curr ;
        curr = curr -> next ;
    }
    if(curr == NULL){
        cout << "element not found\n" ;
        return head ; ;
    }
    prev -> next = curr -> next ;
    delete curr ;
    return head ;
}
node *deleteFromEnd(node*head){

    node *temp = head ;
    if(temp == NULL){ //no element
        cout << "EMPTY\n" ;
        return NULL ;
    }
    if(temp -> next == NULL){  // only one element;
        delete temp ;
        return NULL ;
    }
    while(temp -> next -> next != NULL) {
        temp = temp -> next ;
    }
    node *dummy = temp -> next ;
    temp -> next = NULL ;
    delete dummy ;
    return head ;
}
node *deleteFromSpecificPos(node *head , int val){
    node *curr = head ;
    node *prev = NULL ;
    if(head == NULL){
        return NULL ;
    }
    if(head -> data == val){
        curr = curr -> next ;
        delete head ;
        return curr;
    }
    while (curr != NULL and curr -> data != val ) {
        prev = curr ;
        curr = curr -> next ;
    }
    if(curr == NULL){
        cout << "Element not found\n" ;
        return head;
    }
    prev -> next = curr -> next ;
    delete curr ;
    return head ;

}
void traverse(node *head){
    node *i = head ;
    while(i != NULL){
        cout << i -> data <<" " ;
        i = i -> next ;
    }
    cout << endl ;
}
void search(node *head,int val){
    node *curr = head ;
    while(curr != NULL and curr -> data != val){
        curr = curr -> next ;
    }
    if(curr == NULL){
        cout << "Not found\n" ;
    }
    else{
        cout << "found\n" ;
    }
}

// TC -> O(N) 
// SC -> O(N)
// BRUTE FORCE
node *seperate_odd_eveBF(node* head){
    vector<int>vo , ve ;
    node *curr = head ;

    while(curr != NULL){
        if(curr -> data %2 == 0){
            ve.push_back(curr -> data ) ;
        }
        else{
            vo.push_back(curr -> data) ;
        }
        curr = curr -> next ;
    }
    curr =  head ;
    for(int i = 0 ; i < ve.size() ; i++){
        curr -> data = ve[i] ;
        curr = curr -> next ;
    }
    
    for(int i = 0 ; i < vo.size() ; i++){
        curr -> data = vo[i] ;
        curr = curr -> next ;
    }
    return head ;
}

// TC -> O(N)
// SC -> O(1)
node *seperate_odd_eveopt(node* head){
    node* dummy = head ;
    node *odd = new node(0) , *even = new node(0) ;
    node *oddhead = odd , *evenhead = even ;
    while(dummy != NULL){
        if(dummy -> data %2 == 0){
            node *nn = new node(dummy -> data)  ;
            even -> next = nn ;
            even = even -> next ;
        }
        else{
            node *nn = new node(dummy -> data)  ;
            odd -> next = nn ;
            odd = odd -> next ;
        }
        dummy = dummy -> next ;
    }
    even -> next = oddhead -> next ;
    head = evenhead -> next ;
    return head ;
}



int main(){
    node *head = insertEnd(NULL , 1) ;
    head = insertEnd(head ,3 );
    head = insertEnd(head , 4) ; 
    head = insertEnd(head , 5) ;
    head = insertEnd(head , 2) ;
    head = insertEnd(head , 6) ;
    cout <<endl;
    traverse(head ) ;
    head = seperate_odd_eveopt(head) ;
    cout <<endl;
    traverse(head ) ;
}