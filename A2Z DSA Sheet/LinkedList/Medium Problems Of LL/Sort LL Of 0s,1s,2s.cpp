/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;
    Node *t=head;
    while(t)
    {
        if(t->data==0)
        {
            Node* temp=new Node(0);
            zeroTail->next=temp;
            zeroTail=temp;
        }
        else if(t->data==1)
        {
            Node* temp=new Node(1);
            oneTail->next=temp;
            oneTail=temp;
        }
        else
        {
            Node* temp=new Node(2);
            twoTail->next=temp;
            twoTail=temp;
        }
        t=t->next;
    }
    if(!oneTail)
        zeroTail->next=twoHead->next;
    else
    {
        zeroTail->next=oneHead->next;
        oneTail->next=twoHead->next;
    }
    twoTail->next=NULL;
    return zeroHead->next;
}