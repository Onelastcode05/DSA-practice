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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>nums;
        while(list1){
            nums.push_back(list1->val);
            list1=list1->next;
        }
        while(list2){
            nums.push_back(list2->val);
            list2=list2->next;
        }
        sort(nums.begin(),nums.end());
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            temp->next=new ListNode(x);
            temp=temp->next;
        }
        return dummy->next;
    }
};