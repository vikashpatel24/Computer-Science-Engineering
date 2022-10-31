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
    
    int length(ListNode* head){
        int l=0; ListNode* tmp = head;
        while(head){
            l++,head = head->next;
        }
        return l;
    }
    ListNode* moveK(ListNode* head, int k){
        while(k--){
            head = head->next;
        }
        return head;
    }
    ListNode* findIntersection(ListNode* l1, ListNode* l2){
        while(l1!=l2){
            l1 = l1->next;
            l2 = l2->next;
        }
        return l1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int x = length(headA);
        int y = length(headB);
        
        if(x==y) return findIntersection(headA, headB);
        
        return x>y ?  findIntersection(moveK(headA,x-y),headB) : findIntersection(headA, moveK(headB,y-x));
    }
};