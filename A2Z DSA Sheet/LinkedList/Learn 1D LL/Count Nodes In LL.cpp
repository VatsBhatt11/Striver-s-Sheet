int length(Node *head)

{

    int count=0;

    while(head->next!=NULL&&head->next->next!=NULL){

        head=head->next->next;

        count+=2;

    }

    if(head->next==NULL) count+=1;

    else count+=2;

    return count;

}