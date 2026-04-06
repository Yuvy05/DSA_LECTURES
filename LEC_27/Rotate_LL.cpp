// Problem link : https://leetcode.com/problems/rotate-list/

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if (head == NULL or head ->next == NULL){
//             return head  ;
//         }
//         int ct = 1 ; 
//         ListNode *curr = head ;
//         while(curr ->next != NULL){
//             ct++ ;
//             curr = curr -> next ;
//         }
//         curr -> next = head ;

//         curr = head ;
//         k = k % ct ;
//         for(int i = 1 ; i < ct-k ; i ++){
//             curr = curr -> next ;
//         }
//         ListNode *newhead = curr -> next ;
//         curr -> next = NULL ;

//         return newhead ;
//     }
// };