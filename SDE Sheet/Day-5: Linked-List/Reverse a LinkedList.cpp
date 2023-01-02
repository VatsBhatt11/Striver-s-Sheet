class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=new ListNode();
        ListNode *prev=new ListNode();
        ListNode *forward=new ListNode();
        prev=NULL;
        temp=head;
        if(!temp)
            return NULL;
        while(temp)
        {
            forward=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forward;          
        }
        return prev;
    }
};
