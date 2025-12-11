#include<bits/stdc++.h>
using namespace std ;

class node{

public : 
    int data ; 
    node *next ;
    node *prev ;

    node(){
        data = 0 ;
        prev = NULL ;
        next = NULL  ;
    }
    node(int data ){
        this -> data =data ;
        next = NULL ;
        prev = NULL ;
    }
    node(int data , node*prev , node* next){
        this-> data = data ;
        this -> prev = prev ;
        this -> next = next ;
    }



};
void forwardTravers(node*head){
    node *curr = head ;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next ;
    }
    cout << endl ; 
}
void backwardTraverse(node *tail){
    node *curr = tail ;
    while(curr != NULL){
        cout << curr -> data << " " ;
        curr = curr ->prev ;
    }
    cout << endl ;

}
void forwardSearch(node *head , int val){
    node *curr = head ;
    while(curr != NULL and curr -> data != val){
        curr = curr -> next ;
    }
    if(curr == NULL){
        cout << "element not found\n" ;
    }
    else{
        cout << "element found \n" ;
    }
}
void backwardSearch(node *tail , int val){
    node *curr = tail ;
    while(curr != NULL and curr -> data != val){
        curr = curr -> prev ;
    }
    if(curr == NULL){
        cout << "element not found\n" ;
    }
    else{
        cout << "element found \n" ;
    }
}
pair<node* , node *> insertAtBeg(node *head , node *tail , int val){
    node *nn = new node(val) ;
    if(head == NULL){   return {nn,nn} ;}
    nn -> next = head ;
    head -> prev = nn ;
    
    head = nn ;
    return {head,tail} ;
}
int main(){
    pair<node *,node*> nn = insertAtBeg(NULL,NULL ,10) ;
    nn = insertAtBeg(nn.first , nn.second , 5) ;
    nn = insertAtBeg(nn.first , nn.second , 0) ;
    forwardTravers(nn.first) ;
    backwardTraverse(nn.second) ;
}