Node* insertAtFirst(Node* list, int newValue) {

    // Write your code here

    Node* head = new Node();

    head->data = newValue;

    head->next=list;

    return head;

}