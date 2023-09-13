Node * deleteLastNode(Node *head) {

    //boundary condition when linkedlist consist only single element

    if(head->next==NULL){

        return NULL;

    }

    Node* temp=head;

    Node* pre=NULL;

    while(temp->next!=NULL){

        pre=temp;

        temp=temp->next;

    }

    pre->next=NULL;

 

    return head;

}