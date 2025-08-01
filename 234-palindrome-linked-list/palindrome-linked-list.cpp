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
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        while(head!=NULL){
        ListNode* front=head->next;
        head->next=prev;
        prev=head;
        head=front;
        }
        return prev;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!= NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverse(slow->next);
        ListNode* firsthalf=head;
        ListNode* secondhalf=newHead;
        while(secondhalf!=NULL){
           
            if(firsthalf->val!=secondhalf->val){
                return false;
            }
             firsthalf=firsthalf->next;
            secondhalf=secondhalf->next;
           
        }
         return true;
    }
};