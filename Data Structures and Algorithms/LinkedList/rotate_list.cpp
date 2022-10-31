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

// Leetcode 61: Given the head of a linked list,rotate the list to the 
//              right by k places.

class Solution {
public:
    
    ListNode* rotate(ListNode* start, ListNode* end,int len, int k){
         int x = len-k;
         while(x--){
             start = start->next;
             end = end->next;
         }
         end->next = NULL;
         return start;
    }
    
    ListNode* rotateRight(ListNode* A, int B){
        
        if(!A)return A;

        ListNode* slow = A, *fast = A;
        int len=1;

        while(fast->next){
            fast = fast->next;
            len++;
        }
         fast->next = A; 
        return rotate(A,fast,len,B % len);
   
    }
};