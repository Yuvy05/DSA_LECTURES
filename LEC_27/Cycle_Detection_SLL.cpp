
// Problem Link : https://leetcode.com/problems/linked-list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//  BRUTE FORCE SOLUTION 
//  TC-> O(NLOGN)
//  SC-> O(N)

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         map<ListNode*, int> mp ;
//         ListNode *curr = head ;
//         while(curr != NULL){
//             if(mp.find(curr) != mp.end()){
//                 return true ;
//             }
//             mp[curr] = 1 ;
//             curr = curr -> next ;
//         }
//         return false ;
//     }
    
// };


//  USING SLOW AND FAST POINTER

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode *slow = head , *fast = head ;
//         while(fast != NULL and fast -> next != NULL){
//             slow = slow -> next ;
//             fast = fast -> next -> next ;
//             if(slow == fast){
//                 return true ;
//             }
//         }
//         return false  ;
//     }
// };