
//  PREOBLEM LINK : https://leetcode.com/problems/reverse-linked-list/
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

//  BRUTE FORCE APPROACH USING STACK 

// TC -> O(2N)
// SC -> O(1)
// class Solution {
// public:
//     stack<int> st ;
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head -> next == NULL){
//             return head ;
//         }
//         ListNode* curr = head ;
//         while (curr != NULL){
//             st.push(curr -> val) ;
//             curr = curr -> next ;
//         }
//         curr = head ;
//         while(st.size()){
//             curr -> val = st.top() ;
//             st.pop() ;
//             curr = curr -> next ;
//         }
//         return head ;
//     }
// };

//  OPTIMISED APPROACH USING ITERATIVE METHOD
// TC -> O(N)
//  SC -> O(1)
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head -> next == NULL){
//             return head ;
//         }
//         ListNode *prev = NULL , *curr = head, *front = head -> next ;
//         while(curr != NULL){
//             front = curr -> next ;
//             curr -> next = prev ;
//             prev = curr ;
//             curr = front ;
//         }
//         return prev ;
//     }
// };

// OPTIMISED USING RECURSIVE APPROACH 

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head -> next == NULL){
//             return head ;
//         }
//         ListNode* newhead = reverseList(head -> next) ;
//         ListNode *front = head -> next ;
//         front-> next  = head ;
//         head -> next = NULL ;
//         return newhead ;
//     }
// };

 