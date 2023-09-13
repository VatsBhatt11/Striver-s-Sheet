/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    if(!head || !head->next)
        return 0;
    int n=0,ans=0;
    Node* slow=head,*fast=head;
    while(!slow)
    {
        n++;
        slow=slow->next;
    }
    slow=head;
    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            fast=slow;
            while(fast->next!=slow)
            {
                ans++;
                fast=fast->next;
            }
            return ans+1;
        }
    }
    return ans;
}
