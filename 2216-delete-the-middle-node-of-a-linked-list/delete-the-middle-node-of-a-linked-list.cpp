/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
        TC-O(N)
        SC-O(1)
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
    return nullptr;
      ListNode* slow=head;
      ListNode* fast=head->next->next;
      while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      }  
      // slow->next is the middle node, so we bypass it by pointing to slow->next->next.
      slow->next=slow->next->next;
      return head;
    }
};