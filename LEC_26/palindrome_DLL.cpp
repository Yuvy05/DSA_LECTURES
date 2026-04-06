
// class Solution {
// public:
//     bool isPalindrome(Node* head) {
//         if (head == NULL)
//             return false;

//         if (head->next == NULL)
//             return true;

//         // find tail
//         Node* tail = head;
//         while (tail->next != NULL) {
//             tail = tail->next;
//         }

//         Node* left = head;
//         Node* right = tail;

//         // two-pointer palindrome check
//         while (left != right && left->previous != right) {
//             if (left->value != right->value)
//                 return false;

//             left = left->next;
//             right = right->previous;
//         }

//         return true;
//     }
// };
