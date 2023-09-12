int searchInLinkedList(Node<int> *head, int k) {

    // Write your code here.

    Node<int>* temp= head;

    while(temp != nullptr){

        if((temp->data)== k){

            return 1;

        }

        else{

            temp=temp->next;

        }

    }

 

    return 0;

}