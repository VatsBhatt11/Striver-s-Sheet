/**
 * Definition of doubly linked list:
 *
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

Node * deleteAllOccurrences(Node* head, int k) {
    if(!head)
        return NULL;
    Node* ans=new Node(-1);
    ans->next=head;
    head->prev=ans;
    Node* cur=head;
    while(cur)
    {
        if(cur->data==k)
        {
            Node* next=cur->next;
            Node* prev=cur->prev;
            prev->next=next;
            if(next)
                next->prev=prev;
            delete cur;
            cur=next;
        }
        else
            cur=cur->next;
    }
    head->prev=NULL;
    head=ans->next;
    return head;
}
