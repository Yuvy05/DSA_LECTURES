#include<bits/stdc++.h>
using namespace std;
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

// BRUTE FORCE -
//  PROBLEM LINK : https://leetcode.com/problems/intersection-of-two-linked-lists/
// TC -> O(N*M)
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode *tempA = headA ;
        
//         while(tempA != NULL){
//             ListNode *tempB= headB ;
//             while(tempB != NULL){
//                 if(tempA == tempB){
//                     return tempA ;
//                 }
//                 tempB = tempB -> next ;
//             }
//             tempA = tempA -> next ;
//         }
//         return NULL ;
//     }
// };


//  OPTIMISED USING MAPS 


//  TC -> O((N+M)*LOGN)
//  SC -> O(N)


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode *curra = headA ;
//         map<ListNode *, int> mp ;

//         while(curra != NULL){
//             mp[curra] = 1 ;
//             curra = curra -> next ;
//         }

//         ListNode *currb = headB ;
//         while(currb != NULL){
//             if(mp.find(currb) != mp.end() ){
//                 return currb ;
//             }
//             currb = currb -> next ;
//         }
//         return NULL ;
//     }
// };


//  OPTIMISED USING DIFFRENECE APPROAC
//  MAKING BOTH LL START FROM SAME POINT
//  BEFORE COMPARISION

//  TC -> O(N+M + )
//  SC -> O(1)


// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int ctA = 0 , ctB = 0 ; 
//         ListNode *currA = headA ;
//         while(currA != NULL){
//             ctA++ ;
//             currA = currA -> next ;
//         }
//         ListNode* currB = headB ;
//         while(currB != NULL){
//             ctB++ ;
//             currB = currB -> next ;
//         }
//         currA = headA ;
//         currB = headB ;
//         int l1 = ctA , l2 = ctB ;
            // while(l1 != l2){
            //     if(l1 > l2){
            //         currA = currA -> next ;
            //     }
            //     else{
            //         currB = currB -> next ;
            //     }
            // }
//         while(currA != NULL){
//             if(currA == currB){
//                 return currA ;
//             }
//             currA = currA -> next ;
//             currB = currB -> next ;
//         }
//         return NULL ;
//     }
// };


int main(){
    cout <<endl ;
    node *head1 = insertEnd(NULL , 1) ;
    node *head2 = insertEnd(NULL , 7) ;

    node *node2 = new node(2);
    node *node3 = new node(3);
    node *node4 = new node(4);
    node *node5 = new node(5);
    node *node6= new node(6);

    head1 -> next = node2 ;
    node2 -> next = node3 ;
    node3 -> next = node4 ;
    node4 -> next = node5 ;

    head2 -> next = node6 ;
    node6 -> next = node4 ;

    cout <<endl;



}