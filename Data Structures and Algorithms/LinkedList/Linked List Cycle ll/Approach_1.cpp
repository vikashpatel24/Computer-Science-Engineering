/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


// Leetcode 142 : Given the head of a linked list, return the node where the cycle 
//                begins. If there is no cycle, return null.

//                There is a cycle in a linked list if there is some node in the list
//                that can be reached again by continuously following the next pointer.
//                Internally, pos is used to denote the index of the node 
//                that tail's next pointer is connected to (0-indexed). 
//                It is -1 if there is no cycle. 
//                 
//                Note that pos is not passed as a parameter.

//                Do not modify the linked list.


class Solution {
public:
    ListNode *detectCycle(ListNode *A) {
        
    if(!A)return NULL;
        
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    ListNode* slow = dummy->next, *fast = A->next;

    while(fast && fast->next && slow != fast ){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if(!fast) return NULL;

    fast = dummy;
    while(slow && slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;
        
    }
};