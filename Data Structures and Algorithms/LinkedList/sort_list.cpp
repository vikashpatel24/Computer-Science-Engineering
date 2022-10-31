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

// Leetcode 148 : Given the head of a linked list, return the list after sorting it in ascending order.

class Solution {
public:
    ListNode* MergeTwoSortedList(ListNode* a, ListNode* b){
        
        if(!a)return b;
        if(!b)return a;
        
        ListNode* root; 
        if(a->val <= b->val){
          root = new ListNode(a->val);
          root->next = MergeTwoSortedList(a->next,b);
        }
        else{
          root = new ListNode(b->val);
          root->next = MergeTwoSortedList(a,b->next);
        }
        
        return root;
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(!head || !head->next)return head;
            
       ListNode* slow = head, *fast = head,*prev = head;
        
       while(fast->next && fast->next->next){
           prev = slow;
           slow = slow->next;
           fast = fast->next->next;
           
       }
        
        ListNode* mid = prev->next;
        prev->next = NULL;
        
        // ListNode* root = new ListNode(mid->val);
        ListNode* leftPart = sortList(head);
        ListNode* RightPart = sortList(mid);
    // if(leftPart)
    //     cout<<leftPart->val<<" ";
    // if(RightPart)
    //     cout<<RightPart->val<<" ";
    // cout<<endl;
        return MergeTwoSortedList(leftPart, RightPart);
        
    }
};