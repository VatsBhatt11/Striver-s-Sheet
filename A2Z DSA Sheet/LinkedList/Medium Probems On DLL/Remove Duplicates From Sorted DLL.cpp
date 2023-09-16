/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    Node* prev=head,*cur=head->next;
    while(cur)
    {
        if(cur->data==prev->data)
        {
            Node* temp=cur;
            while(temp && temp->data==prev->data)
                temp=temp->next;
            prev->next=temp;
            if(temp)
                temp->prev=prev;
            cur=temp;
        }
        else
        {
            prev=cur;
            cur=cur->next;
        }
    }
    return head;
}
