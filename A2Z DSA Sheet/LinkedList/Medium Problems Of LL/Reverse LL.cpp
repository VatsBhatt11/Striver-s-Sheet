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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=new ListNode();
        ListNode *prev=NULL;
        temp=head;
        if(!(temp && temp->next))
            return temp;
        ListNode *forward=new ListNode();
        while(temp->next)
        {
            forward=temp->next;
            temp->next = prev;
            prev=temp;
            temp=forward;
        }
        temp->next=prev;
        head=temp;
        return head;
    }
};