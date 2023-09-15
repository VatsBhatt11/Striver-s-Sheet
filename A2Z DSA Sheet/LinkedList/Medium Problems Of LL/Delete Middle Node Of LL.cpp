class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next)
            return NULL;
        ListNode* slow=head,*fast=slow,*temp=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            temp=slow;
            slow=slow->next;
        }
        temp->next=slow->next;
        delete slow;
        return head;
    }
};