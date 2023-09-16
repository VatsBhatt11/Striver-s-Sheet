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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        int len=1;
        ListNode* temp=head;
        while(temp->next)
        {
            len++;
            temp=temp->next;
        }
        k%=len;
        temp->next=head;
        for(int i=0;i<len-k;i++)
            temp=temp->next;
        ListNode* ans=temp->next;
        temp->next=NULL;
        return ans;
    }
};