// Problem link : https://leetcode.com/problems/palindrome-linked-list/description/

// Brute force approach-> store in array

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> v ;
//         ListNode* curr = head ;
//         while(curr != NULL){
//             v.push_back(curr -> val) ;
//             curr = curr -> next ;
//         }
//         int n = v.size() -1 ;
//         for(int i = 0 ; i < v.size()/2 ; i++){
//             if(v[i] != v[n - i]){
//                 return false ;
//             }
//         }
//         return true ;
//     }
// };


// Optimised approach , without extra space
// class Solution {
// public:
//     ListNode* reverseSLL(ListNode * head){
//         if(head == NULL or head -> next == NULL){
//             return head ;
//         }
//         ListNode* newhead = reverseSLL(head -> next) ;
//         ListNode* front = head -> next ;
//         front -> next = head ;
//         head -> next = NULL ;
//         return newhead ;
//     }
//     bool isPalindrome(ListNode* head) {
//         if(head == NULL or head -> next == NULL){
//             return true ;
//         }
//         ListNode* tortoise = head , *heir = head ; 
//         while(heir != NULL and heir -> next != NULL){
//             tortoise = tortoise -> next ;
//             heir = heir -> next -> next ;
//         }
//         // reverse a linked list 

//         ListNode *mid = reverseSLL(tortoise ) ;
//         ListNode*curr = head ;
//         while(mid != NULL and curr != NULL){
//             if(mid -> val != curr -> val){
//                 return false ;
//             }
//             curr = curr -> next ;
//             mid = mid -> next ;
//         }
//         return true ;

//     }
// };
