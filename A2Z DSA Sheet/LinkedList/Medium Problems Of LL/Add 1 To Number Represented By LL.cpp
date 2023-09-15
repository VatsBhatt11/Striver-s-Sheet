#include <bits/stdc++.h>
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addOne(Node *head)
{
    Node *ans;
    if(!head)
        return new Node(1);
    stack<int>s;
    Node*temp=head;
    while(temp->next)
    {
        s.push(temp->data);
        temp=temp->next;
    }
    if(temp->data<9)
    {
        temp->data=temp->data+1;
        return head;
    }
    int carry=1;
    temp->data=0;
    ans=temp;
    while(!s.empty())
    {
        Node* t=new Node((s.top()+carry)%10);
        carry=(s.top()+carry)/10;
        s.pop();
        t->next=ans;
        ans=t;
    }
    if(carry)
    {
        Node *t=new Node(1);
        t->next=ans;
        ans=t;
    }
    return ans;
}
