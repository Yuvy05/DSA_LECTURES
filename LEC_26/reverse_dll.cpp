
// Problem Link : https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
// class Solution {
//   public:
//     Node *reverse(Node *head) {
//         // code here
//         Node* curr = head ;
//         Node* prev = NULL  ;
//         while(curr != NULL){
//             curr -> prev = curr -> next ;
//             curr -> next = prev ;
            
//             prev = curr ;
//             curr = curr -> prev ;
            
//         }
//         head = curr ;
//         return head ;
        
//     }
// };

//  REVERESE USING STACK 
//  TC -> O(2N)
//  SC -> O(N)
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
void forwardTravers(node*head){
    node *curr = head ;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next ;
    }
    cout << endl ; 
}

//  TC -> O(2N)
//  SC -> O(N)  
node *reverseDLL_usingStack(node *head){
    if(head == NULL || head -> next == NULL){
        return head ;
    }
    stack<int> st ;
    node *curr = head ;
    while(curr != NULL){
        st.push(curr -> data) ;
        curr = curr -> next ;
    }
    // pair<node *,node*> n = {NULL, NULL};
    curr = head ;
    while(st.size()){
        // n = insertAtEnd(n.first,n.second ,st.top()) ;
        curr -> data = st.top()  ;
        curr = curr -> next ;
        st.pop() ;
    }
    return head ;
}
int main(){

    pair<node *,node*> nn = insertAtEnd(NULL,NULL ,1) ;

    nn = insertAtEnd(nn.first , nn.second , 2) ;
    nn = insertAtEnd(nn.first , nn.second , 3) ;
    nn = insertAtEnd(nn.first , nn.second , 4) ;

    forwardTravers(nn.first) ;


    nn.first = reverseDLL_usingStack(nn.first) ;
    cout << endl ;
    forwardTravers(nn.first) ;
}