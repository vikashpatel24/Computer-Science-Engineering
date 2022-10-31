// Leetcode 234: Given the head of a singly linked list, 
//               return true if it is a palindrome.

class Solution {
public:
    
    void print(ListNode* node){
        
        while(node){
            cout<<node->val<<" ";
            node = node->next;
        }
    }
    ListNode* reverseList(ListNode* node){
        
        ListNode* prev = NULL, *curr = node,*tmp;
        
        while(curr){
        tmp = curr->next;
        curr->next = prev;
            prev = curr;
         
        curr = tmp; 
            
        }
        return prev;
        
    }
    
    bool isPalindrome(ListNode* head) {
       
          
    ListNode* curr = head, *fast = head;
    
    while(fast && fast->next ){
       
        curr = curr->next;
        fast = fast->next->next;
        
        // cout<<curr->val<<" ";
    }
    
  ListNode* head2 = reverseList(curr);
        
        // if(!head2)return 0;
    print(head2);
        while(head2){
            // cout<<head->val<<" "<<head2->val<<endl;
            
          if(head2->val != head->val)
              return 0;
            
            head2 = head2->next;
            head = head->next;
            
        }
        
        return 1;
    }
};


// Recursive soln in O(n) time and O(n) Auxillery space
// class Solution {
// public:
//     ListNode* temp;
//     bool isPalindrome(ListNode* head) {
//         temp = head;
//         return check(head);
//     }
    
//     bool check(ListNode* p) {
//         if (NULL == p) return true;
//         bool isPal = check(p->next) & (temp->val == p->val);
//         temp = temp->next;
//         return isPal;
//     }
// };