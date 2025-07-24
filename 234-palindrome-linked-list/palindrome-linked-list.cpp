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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        while (head != NULL) {
            ListNode* front = head->next;
            head->next = prev;
            prev = head;
            head = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast!= NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondhalf = reverse(slow);
        ListNode* firsthalf = head;
        while (secondhalf != NULL) {
            if (firsthalf->val != secondhalf->val) {
                return false;
            }
            secondhalf = secondhalf->next;
            firsthalf = firsthalf->next;
        }
       
        return true;
    }
};