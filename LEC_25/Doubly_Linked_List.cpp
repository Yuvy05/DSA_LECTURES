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
pair<node * , node *> insertAtEnd(node *head , node *tail , int val){
    node* nn = new node(val) ;
    if(tail == NULL ){
        return {nn , nn};
    }
    tail -> next = nn ;
    nn -> prev = tail ;
    tail = nn ;
    return {head , tail} ;
}
pair<node *, node *> insertAtPos(node* head  , node *tail , int val,int pos){

    node *nn = new node(val) ;
    
    if(head == NULL){
        return{nn ,nn};
    }
    int ct = 1 ;

    node *curr = head ;

    while(curr != NULL and ct != pos){
        curr = curr -> next ;
        ct ++ ;
    }
    if(curr == NULL){
        cout << "pos not found\n" ;
        delete nn ;
        return {head , tail} ;
    }
    nn -> next = curr -> next ;
    nn -> prev = curr ;
    curr -> next = nn ;
    if(nn -> next == NULL){
        tail = nn ;
        return {head , tail} ;   
    }
    nn -> next -> prev  = nn ;
    return {head , tail} ;

}

//  TC -> O(1)
pair<node *, node *> deleteFromStart(node *head , node *tail ){
    if(head == NULL){
        return{head , tail} ;
    }
    if(head -> next == NULL){
        return {NULL , NULL} ;
    }
    if (head -> next == tail){
        delete head ;
        tail -> prev = NULL ;
        return {tail , tail} ;
    }
    node *temp = head ;
    head = head -> next ;
    head ->  prev = NULL ;
    delete temp ;
    return{head , tail} ;
}

//tc -> O(1)
pair<node* , node*> deleteFromEnd(node *head , node *tail){
    if(tail == NULL){
        return {head ,tail} ;
    }
    if(tail -> prev == NULL){
        return {NULL , NULL} ;
    }
    node *temp = tail ;
    tail = tail -> prev ;
    tail ->  next = NULL ;

    delete temp ;
    return {head , tail} ;
}

//TC -> O(N)
pair<node * , node *> deleteFromPos(node *head , node *tail , int pos){
    int ctr = 1 ;

    node *curr = head ;

    while( curr != NULL and ctr != pos){
        curr = curr -> next ;
        ctr ++ ;
    }
    if(curr == NULL){
        cout << "Invalid pos\n" ;
        return{head , tail} ;
    }
    if(curr -> next != NULL and curr -> prev != NULL){
        curr -> next ->prev = curr -> prev ;
        curr -> prev -> next = curr -> next ;
        delete curr ;
        return {head , tail} ;
    }
    if(curr -> prev == NULL){
        curr -> next ->prev = curr -> prev ;
        head = curr -> next ;
        head -> prev = NULL ;
        delete curr ;
        return {head , tail};
    }
    else{
        curr -> prev -> next = NULL ;
        tail = curr -> prev ;
        delete curr ; 
        return{head , tail} ;
    }


}

//  FIND MIDDLE ELEMENT

// PROBLEM LINK : https://leetcode.com/problems/middle-of-the-linked-list/
// TC - > O(N + N/2)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int ctr = 0 ;
//         ListNode* curr = head ;
//         while(curr != NULL){
//             curr = curr -> next ;
//             ctr ++ ;
//         }
//         int val;
//         if(ctr % 2 == 0){
//             val = ctr/2 + 1 ;
//         }
//         else{
//             val = (ctr + 1)/2 ;
//         }
//         curr = head ;
//         for(int i = 1 ; i < val ; i++){
//             curr = curr -> next ;
//         }
//         return curr ;
//     }
// };

}
int main(){
    pair<node *,node*> nn = insertAtBeg(NULL,NULL ,10) ;
    nn = insertAtBeg(nn.first , nn.second , 5) ;
    nn = insertAtBeg(nn.first , nn.second , 0) ;
    nn = insertAtEnd(nn.first , nn.second , 20) ;
    // nn = insertAtPos(nn.first , nn.second , 30 , 6) ;
    // nn = deleteFromPos(nn.first , nn.second , 4);
    // nn = deleteFromStart(nn.first , nn.second );
    // nn = deleteFromEnd(nn.first , nn.second );

    forwardTravers(nn.first) ;
    backwardTraverse(nn.second) ; 
}
