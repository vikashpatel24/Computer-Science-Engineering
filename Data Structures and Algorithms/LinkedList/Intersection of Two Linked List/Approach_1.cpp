/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Leetcode 160 : Given the heads of two singly linked-lists headA and headB, 
//                return the node at which the two lists intersect. 
//                If the two linked lists have no intersection at all, return null.

//                Note that the linked lists must retain their original structure 
//                after the function returns.

class Solution {
public:
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1 = headA, *curr2 = headB;
        while(curr1!=curr2){
            curr1 = curr1 ? curr1 = curr1->next : headB;
            curr2 = curr2 ? curr2 = curr2->next : headA;
        }
        return curr1;
    }
};