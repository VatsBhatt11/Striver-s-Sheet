Node * insertAtTail(Node *head, int k) {

 

    Node* t=new Node(k);

    Node* temp=head;

    t->prev=temp;

    t->next=NULL;

    if(head==NULL){

        head=t;

    }else{

        while(temp->next!=NULL){

            temp=temp->next;

        }

        temp->next=t;

    }

    

    return head;

}