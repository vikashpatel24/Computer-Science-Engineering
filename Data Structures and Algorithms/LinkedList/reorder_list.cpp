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

// Leetcode 143: You are given the head of a singly linked-list. The list can be represented as:

//               L0 → L1 → … → Ln - 1 → Ln
//               Reorder the list to be on the following form:

//               L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
//               You may not modify the values in the list's nodes. Only nodes themselves may be changed.



class Solution {
public:
    
    ListNode* reverse(ListNode* head){
        ListNode* curr = head, *prev = NULL;
        while(curr){
            ListNode* currNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = currNext;
        }
        return prev;  
        
    }
    
   ListNode* Merge(ListNode* l1,ListNode* l2){
      
       if(!l2)return l1;
       if(!l1)return l2;
       
       ListNode* l2Next = l2->next;
       ListNode* l1Next = l1->next;
       
       l1->next = l2;
       l2->next = Merge(l1Next,l2Next);
       
       return l1;
   }
    void print(ListNode* head){
        while(head){
            cout<<head->val<<" ";
            head = head->next;
        }
        cout<<endl;
    }
    void reorderList(ListNode* head) {
        
        if(!head || !head->next)return;
        ListNode* slow = head, *fast = head;
        while(fast->next && fast->next->next){
          slow = slow->next;
          fast = fast->next->next;
        }
        
        ListNode* mid = slow->next;
        slow->next = NULL;
        fast = reverse(mid);
        // print(head);
        // print(fast);
        
       head = Merge(head,fast);
        
    }
};