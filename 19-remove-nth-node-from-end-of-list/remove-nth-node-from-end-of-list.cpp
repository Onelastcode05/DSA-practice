class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0); // Dummy before head
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            if (fast == nullptr) return head; // n too large
            fast = fast->next;
        }

        // Move fast to end, maintaining the gap
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from end
        ListNode* deleteNode = slow->next;
        slow->next = deleteNode->next;
        delete deleteNode;

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
