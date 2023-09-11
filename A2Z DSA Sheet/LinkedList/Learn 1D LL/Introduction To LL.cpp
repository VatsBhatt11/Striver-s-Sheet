Node* constructLL(vector<int>& arr) {

    // Write your code here

     Node*  temp = new Node();

     Node* head= temp;

     for(int i=0; i<arr.size(); i++)

     {

         temp->data = arr[i];

         if (i < (arr.size() - 1)) {

           temp->next = new Node();

           temp = temp->next;

         }

     }

     return head;

}