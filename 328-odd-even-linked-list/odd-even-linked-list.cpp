class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;  // Early return for 0 or 1 node

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;  
        return head;
    }
};
