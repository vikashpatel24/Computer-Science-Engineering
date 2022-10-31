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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Leetcode 109: Given the head of a singly linked list where elements are sorted 
//               ascending order, convert it to a height balanced BST.

//               For this problem, a height-balanced binary tree is defined 
//               as a binary tree in which the depth of the two subtrees of 
//                every node never differ by more than 1.

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* A) {
        
    if(!A )return NULL;
    if(!A->next)return new TreeNode(A->val);
    
    ListNode* slow = A, *fast = A, *prev = A;
    while(fast->next && fast->next->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    ListNode* mid = prev->next;  // mid == slow
    prev->next = NULL;
    TreeNode* root = new TreeNode(mid->val);
    root->left = sortedListToBST(A);
    root->right = sortedListToBST(mid->next);
      
    return root;
        
    }
};