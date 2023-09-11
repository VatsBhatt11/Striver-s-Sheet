Node* constructDLL(vector<int>& a) {

Node * head=new Node(a[0]);

Node *p=head;

Node * q=NULL;

for(int i=1;i<=a.size();i++)

{

p->prev=q;

q=p;

p->next=new Node(a[i]);

p=p->next;

 

}

return head;

}